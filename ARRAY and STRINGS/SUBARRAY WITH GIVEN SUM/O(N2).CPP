//Subarray with given sum 
//Given an unsorted array A of size N that contains only non-negative integers, 
//find a continuous sub-array which adds to a given number S.

//In case of multiple subarrays, return the subarray which comes first on moving from left to right.

//Example 1:

//Input:
//N = 5, S = 12
//A[] = {1,2,3,7,5}
//Output: 2 4
//Explanation: The sum of elements from 2nd position to 4th position is 12.
//time complexity = O(N2) , space complexity = O(1)
#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[], int n, int s){
	int curr_sum, i, j;//initializations
	for(i=0; i<n; i++){
		curr_sum = arr[i];//to initialize cuurent sub by first element
		for(j = i+1; j<=n;j++){
			if(curr_sum == s){//if same sum them return 1
				cout<<"subarray indexes started from "<<i<<" to "<<j-1<<endl;
				return 1;
			}
			if(curr_sum > s || j == n){//if current sum exceeds the sum or j == n then break the loop
				break;
			}
			curr_sum = curr_sum + arr[j];//continue the loop by adding the i'th values in current sum
		}
	}
	cout<<"no subarray found"<<endl;//no subarray found at last
	return -1;
}
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 22;
    subarray(arr, n, sum);
    return 0;
}
