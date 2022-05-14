//Peak element
//An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
//Given an array arr[] of size N, find the index of any one of its peak elements.
//Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

// Time complexity = O(N)
// Space complexity = O(1)
#include<bits/stdc++.h>
using namespace std;
int peekelement(int arr[], int n){
	if(n == 1){
		return 0;
	}
	for(int i = 1; i<n-1 ; i++){
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
			return i;
		}
	}
}
int main(){
	int arr[] = { 1000, 11, 445, 1, 330, 3000, 564646 };
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<peekelement(arr, n)<<endl;
	
	return 0;
}





