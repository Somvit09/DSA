//MAXIMUM SUBARRAY
// given an integer array nums, find the contiguous subarray ( containing at least one number ) which has the largest sum and return
// its sum.
//example:
// input: [-2,1,-3,4,-1,2,1,-5,4]
// output: 6
// explanation: [4,-1,2,1] has the lasrgest sum = 6.
//O(n) time complexity
#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n)
{
    // stores alltotal max sum of the array
    int max_so_far = 0;
 
    //max_ending_here =  it stores the sum of the i'th variable
    int max_ending_here = 0;
    int max_ = -500;
    int temp[n]; //initializing an empty array
    for(int i=0; i<n; i++){// checking if the array only contains negative number .only that case we return the maximum variable of the list
        if(arr[i] < 0){
            temp[i] = arr[i];   
        }
    }
    if(temp == arr){ // checking the two arrays are equal or not. Note this condition needs to be checked
        for(int i = 0; i<n; i++){
            if(max_ < arr[i]){
                max_ = arr[i];// getting the maximum value from the array and return that
            }
        }
        return max_;
    }
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
		// stores the i'th variable sum
        max_ending_here = max_ending_here + arr[i];
 
        // if the maximum sum is negative, set it to 0 (which represents
        // an empty subarray) comparision with 0 with max operator
        max_ending_here = max(max_ending_here, 0);
 
        // update the result if the current subarray sum is found to be greater
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
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
	cout<<"max_subarray:"<<kadane(arr, n);
	return 0;
}

