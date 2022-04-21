#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int m, int r){
	int i = l; //starting index for left subarray
	int j = m+1; //starting index for right subarray
	int k = l; //startig index for temporary array
	
	int temp[r]; //temporary array of given array length
	
	while(i<=m && j<=r){ //l is going to the middle index or first subarray and j is going through the right 
						//	subarray
		if(arr[i] <= arr[j]){ // if i th index value is smaller than j th index value then
			temp[k] = arr[i]; // stores that smaller value in temp array
			i++; // i th index incremented 
			k++; // k th index incremented
		}
		else{ // if j th index value is smaller than i th index value then
			temp[k] = arr[j]; // stores that smaller value in temp array
			j++; // j th index incremented 
			k++; // k th index incremented
		}
	}
	
	while(i <= m){
		temp[k] = arr[i]; //coping all elements from left subarray to temp
		i++;
		k++;	
	}
	
	while(j <= r){
		temp[k] = arr[j]; //coping all elements from right subarray to temp
		j++;
		k++;	
	}
	
	for(int s = l; s <= r ; s++){
		arr[s] = temp[s]; //coping all the elements from temp array to arr
	}
}

void MergeSort(int arr[], int l, int r){
	if(l < r){
		//l = leftmost or starting index which is 0
		//r = rightmost index or len(arr)-1
		//m = middle element for dividing
		int m = (l + r)/2;// division 
		MergeSort(arr, l, m); //recursion
		MergeSort(arr, m+1, r);//recursion
		Merge(arr, l, m, r);//merging
	}
}

int main(){
	int n;
	cout<<"arrey length"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter arrey values "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"\nthe given array is ---- "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	int l = 0;
	int r = n-1;
	cout<<"\nSorting ....."<<endl;
	MergeSort(arr, l, r);
	cout<<"\ndone."<<endl;
	cout<<"\nprinting final sorted arrey... "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
