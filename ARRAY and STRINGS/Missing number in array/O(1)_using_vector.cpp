
//Missing number in array
//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

//Example 1:

//Input:
//////N = 5
//A[] = {1,2,3,5}
//Output: 4

#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int total = (n+1)*(n+2)/2;
        int curr_sum = accumulate(array.begin(), array.end(), 0);
        return (total-curr_sum);
    }
};
int main() 
{
    vector<int> a(4);
    for(int i =0; i<4; i++){
    	cin>>a[i];
	}
    Solution soll;
    cout << soll.MissingNumber(a, 4);
    return 0;
}
