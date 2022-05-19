//Union of two arrays
//Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

//Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, 
//then only one occurrence of element should be printed in the union.

//Example 1:

//Input:
//5 3
//1 2 3 4 5
//1 2 3
//Output: 
//5
//Explanation: 
//1, 2, 3, 4 and 5 are the
//elements which comes in the union set
//of both arrays. So count is 5.

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
		set<int>s;
		for(int i = 0; i<n ; i++){
			s.insert(a[i]);
		}
		for(int i = 0; i<m ; i++){
			s.insert(b[i]);
		}
		return s.size();
    }
};
int main(){
	Solution soll;
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] =  {1, 2, 3};
	int m = sizeof(arr1) / sizeof(arr1[0]);
	int n = sizeof(arr2) / sizeof(arr2[0]);
	cout<<soll.doUnion(arr1, m, arr2, n)<<endl;
	return 0;
}
