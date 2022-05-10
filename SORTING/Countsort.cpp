#include<bits/stdc++.h>
using namespace std;

void Countsort(int arr[], int s, int r){
	int output_array[s];//initialized an output array
	int count_array[r];//initialized an count array
	
	//initialized all elements to 0 in count array
	for(int i = 0; i < r; i++){
		count_array[i] = 0;//all the values of the count array will be 0 for the first time
	}

	//take a count of all elements in the input array
	for(int i = 0; i < s; i++){
		++count_array[arr[i]];//for the values of the input(arr) array, the values will be stored accroding to 
	} // the index of the count array. if the value of arr is 1 then 1 will be stored in the count array[1] 
	// position and the count array position will be incremented. if the arr has 2 same values then the same 	
	// index number has the value 2.
	
	//cummulative count of the count array to get the positions of elements to be stored in the outpt array
	for(int i = 1; i < r; i++){
		count_array[i] = count_array[i] + count_array[i-1];
	}
	
	//placing input array elements into outpt array in proper positions such that the result is a sorted array 
	//in  ascending order
	for(int i = 0; i < s; i++){
		output_array[--count_array[arr[i]]] = arr[i];
	}
	
	//copy output array elements into input array
	for(int i = 0; i < s; i++){
		arr[i] = output_array[i];
	}	
}

int main()
{
	int size=0;
	int range = 10;
	cout<<"Enter Size of array: "<<endl;
	cin>>size;
	int myarray[size];
	cout<<"Enter "<<size<<" integers in any order in range of 0-9: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>myarray[i];
	}
	cout<<"Before Sorting"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	cout<<endl;
	Countsort(myarray,size,range);  // counting sort called
	cout<<"After Sorting"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<myarray[i]<<" ";
	}
	return 0;
}
