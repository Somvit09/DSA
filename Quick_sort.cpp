#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[], int s, int e){
	int pivot = arr[e]; //selected the last element as pivot element
	int pindex = s; //to track the smaller element 
	
	for(int i = s; i < e; i++){
		if(arr[i] < pivot){ //checking the value of arr is smaller than pivot element or not
			int temp = arr[i];
			arr[i] = arr[pindex];
			arr[pindex] = temp;// swapping
			pindex++;//move forward in the array for swapping
		}
	}
	
	int temp = arr[e];//swapping the pivot element with the pindex'th element or to set the pivot element to 
	arr[e] = arr[pindex]; // the right position
	arr[pindex] = temp;
	
	return pindex;//returning the pindex to make partition of left and right subarray
}

void QuickSort(int arr[], int s, int e){
	if(s < e){
		int p = Partition(arr, s, e); //partition happening
		QuickSort(arr, s, p-1); //recursion in left subarray
		QuickSort(arr, p+1, e); //recursion in right subarray
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
	QuickSort(arr, l, r);
	cout<<"\ndone."<<endl;
	cout<<"\nprinting final sorted arrey... "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
