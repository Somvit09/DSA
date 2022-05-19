//Cyclically rotate an array by one
//Given an array, rotate the array by one position in clock-wise direction.
 

//Example 1:

//Input:
//N = 5
//A[] = {1, 2, 3, 4, 5}
//Output:
//5 1 2 3 4


#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int i = 0;
    while(i<n-1){
        swap(arr[n-1], arr[i]);
        i++;
        for(int i = 0; i<n; i++){
	    	cout<<arr[i]<<" ";
		}
		cout<<endl;
    }
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int m = sizeof(arr) / sizeof(arr[0]);
	rotate(arr, m);
	for(int i = 0; i<m; i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
