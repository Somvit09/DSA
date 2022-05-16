//Move all negative elements to end
//Given an unsorted array arr[] of size N having both negative and positive integers. 
//The task is place all negative element at the end of array without changing the order of positive element and negative element.
//Example 1:

//Input : 
//N = 8
//arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
//Output : 
//1  3  2  11  6  -1  -7  -5

#include<bits/stdc++.h>
using namespace std;
void segregateElements(int arr[],int n){
        // Your code goes here
        int temp[n];
        int j = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] >= 0){
                temp[j] = arr[i];
                j++;
            }
        }
        if(j == n-1 || j == 0){
            return;
        }
        for(int i = 0; i<n; i++){
            if(arr[i] < 0){
                temp[j] = arr[i];
                j++;
            }
        }
        memcpy(arr, temp, sizeof(temp));
}
int main()
{
    int arr[] = {1 ,-1 ,-3 , -2, 7, 5, 11, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    segregateElements(arr, n);
 
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
 
    return 0;
}
