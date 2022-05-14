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
	if(arr[0] >= arr[1]){
		return 0;
	}
	if(arr[n-1] >= arr[n-2]){
		return n-1;
	}
	for(int i = 1; i<n-1 ; i++){
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
			return i;
		}
	}
}
int main(){
	int n, arr[n];
	cout<<"enter array size"<<endl;
	cin>>n;
	for(int i = 0; i<n; i++){
		arr[i] = 0;
	}
	cout<<"enter array values"<<endl;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"array is: ";
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<",";
	}
	cout<<"peek element will be of this array is: "<<peekelement(arr, n);
	return 0;
}





