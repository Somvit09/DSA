// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int max = 0, num;
        for(int i = 0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        int temp[max+1];
        for(int i = 0; i<max+1; i++){
            temp[i] = 0;
        }
        for(int i = 0; i<n; i++){
            num = arr[i];
            temp[num]++;
        }
        for(int i = 0; i<n ; i++){
            num = arr[i];
            if(temp[num] > 1){
                return i+1;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cout<<"enter testcases"<<endl;
    cin >> t;

    while (t--) {
        int n;
        cout<<"enter array length"<<endl;
        cin >> n;

        int arr[n];
		cout<<"enter array values"<<endl;
        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
