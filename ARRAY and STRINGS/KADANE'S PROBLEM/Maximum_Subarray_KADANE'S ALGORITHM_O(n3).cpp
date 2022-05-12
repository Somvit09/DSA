//MAXIMUM SUBARRAY
// given an integer array nums, find the contiguous subarray ( containing at least one number ) which has the largest sum and return
// its sum.
//example:
// input: [-2,1,-3,4,-1,2,1,-5,4]
// output: 6
// explanation: [4,-1,2,1] has the lasrgest sum = 6.
//O(n3) time complexity
#include<bits/stdc++.h>
using namespace std;
int maximum_subarray_sum(int arr[], int n){
	int maximum_sum = 0;
	for(int i=0; i <n; i++){
		for(int j = i; j < n; j++){
			int subarraysum = 0;
			for(int k = i; k < j; k++){
				subarraysum = subarraysum + arr[k];
				if(subarraysum > maximum_sum){
					maximum_sum = subarraysum;	
				}
			}
		}
	}
	return maximum_sum;
}
int main(){
	int n = 9;
	int arr[n] = {1,-2,3,4,5,-10};
	cout<<maximum_subarray_sum(arr, n);
	return 0;
}

