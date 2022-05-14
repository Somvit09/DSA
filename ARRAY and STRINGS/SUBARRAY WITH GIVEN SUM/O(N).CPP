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
//time complexity = O(N) , space complexity = O(1)
#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[], int n, int s){
	int curr_sum = arr[0], start = 0;
	for(int i = 1; i<=n ; i++){
		//if the current sum exceeds the sum then just simply remove the starting elements
		while(curr_sum > s && start < i-1){
			curr_sum = curr_sum - arr[start];
			start++;
			cout<<"while loop"<<curr_sum<<","<<start<<endl;
		} 
		//if the current sum is equal to sum then simply return true and print the value
		if(curr_sum == s){
			cout<<"sum will be from index "<<start<<" to "<<i-1<<endl;
			return 1;
		}
		if(i < n){//continuously adding the current sum with the i'th variable
			curr_sum = curr_sum + arr[i];
			cout<<curr_sum<<endl;
		}
	}
	//program comes to here means no subarray found and then jst return -1
	cout<<"no subarray found"<<endl;
}
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subarray(arr, n, sum);
    return 0;
}
