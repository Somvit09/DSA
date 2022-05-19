//Missing number in array
//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

//Example 1:

//Input:
//////N = 5
//A[] = {1,2,3,5}
//Output: 4

#include<bits/stdc++.h>
using namespace std;
int MissingNumber(int arr[], int n){
	int total = (n+1)*(n+2)/2;
	int curr = accumulate(arr, arr+n, 0);
	return total-curr;
}
int main() 
{
    int a[] = {1, 2, 3, 5} ;
    int n = sizeof(a)/sizeof(a[0]);
    cout << MissingNumber(a, n);
    return 0;
}
