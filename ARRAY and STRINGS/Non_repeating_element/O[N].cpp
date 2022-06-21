#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int firstNonRepeating(int arr[], int n){
    	unordered_map<int, int> mp;
        for(int i = 0; i< n; i++){
            mp[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(mp[arr[i]] == 1){
                return arr[i];
            }
        }
        return -1;
    }
};

int main(){
    int n;
    n = 6;
    int arr[6] = {-1, 2, -1, 3, 2};
    Solution obj;
    cout<<obj.firstNonRepeating(arr, n);
    return 0;
}
