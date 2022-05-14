//Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. 
//The functions should put all 0s first, then all 1s and all 2s in last.
//Examples: 
 
//Input: {0, 1, 2, 0, 1, 2}
//Output: {0, 0, 1, 1, 2, 2}

//Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
//Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
// time complexity = O(N)
// space complexity = O(1)

#include<bits/stdc++.h>
using namespace std;
int DUTCH(int arr[], int n){
	int l = 0, mid = 0;
	int h = n - 1;
	while(mid <= h){
		if(arr[mid] == 0){
			swap(arr[mid], arr[l]);
			l++;
			mid++;
		}
		else if(arr[mid] == 1){
			mid++;
		}
		else{
			swap(arr[mid], arr[h]);
			h--;
		}
	}
}
int main(){
	cout<<"enter array size"<<endl;
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		arr[i] = 0;
	}
	cout<<"enter array values"<<endl;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<"array is :";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<",";
	}
	cout<<"the sorted array is :"<<endl;
	DUTCH(arr, n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
