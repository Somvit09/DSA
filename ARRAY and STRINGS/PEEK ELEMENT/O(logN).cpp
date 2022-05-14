//Peak element
//An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
//Given an array arr[] of size N, find the index of any one of its peak elements.
//Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0.

// Time complexity = O(logN)
// Space complexity = O(1)
#include<bits/stdc++.h>
using namespace std;
int findpeekconstant(int arr[], int low, int high, int n){
    int mid = (high+low) / 2;//mid variable
    
    if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == n-1 || arr[mid] >= arr[mid+1])){//checking if the value is greater than its 
    //previous or next variable ( main comparison )
        return mid;
    }
    
    else if(mid > 0 && arr[mid] <= arr[mid-1]){// if the mid value is less than its previous value then the peek value will be at 
    // left subarray
        findpeekconstant(arr, low, mid-1, n);
    }
    else{ // if not present in left subarray then it will present in the right subarray
        findpeekconstant(arr, mid+1, high, n);
    }
    
    
}
int peakElement(int arr[], int n)
{
   // Your code here
    return findpeekconstant(arr, 0, n-1, n);// recursive happens
}
int main(){
	int arr[] = {1,0,5,0,1};
	int n = sizeof(arr);
	int x = peakElement(arr, n);
	cout<<"the peek element of the array is : "<<x<<endl;
	return 0;
}
