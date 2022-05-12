//MAXIMUM SUBARRAY
// given an integer array nums, find the contiguous subarray ( containing at least one number ) which has the largest sum and return
// its sum.
//example:
// input: [-2,1,-3,4,-1,2,1,-5,4]
// output: 6
// explanation: [4,-1,2,1] has the lasrgest sum = 6.
//O(n2) time complexity
#include<bits/stdc++.h>
using namespace std;
int maximum_subarray(int arr[], int n){
	int max_sum = 0;
	for(int i = 0; i<n;i++){
		int subsum = 0;
		for(int j = i; j<n; j++){
			subsum = subsum + arr[j];
			if(subsum > max_sum){
				max_sum = subsum;
			}
		}
	}
	return max_sum;
}
int main(){
	int n = 9;
	int arr[n] = {1,-2,3,4,5,-10};
	cout<<maximum_subarray(arr, n);
	return 0;
}

