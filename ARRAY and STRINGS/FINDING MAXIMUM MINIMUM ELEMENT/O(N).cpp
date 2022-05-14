#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int max;
    int min;
};
Pair getMinMax(long long a[], int n) {
    struct Pair minmax;
     if(n == 1){
         minmax.max = a[0];
         minmax.min = a[0];
         return minmax;
     }
     
     if(a[0] > a[1]){
         minmax.max = a[0];
         minmax.min = a[1];
     }
     else{
         minmax.min = a[0];
         minmax.max = a[1];
     }
     
     for(int i = 2; i<n;i++){
         if(a[i] > minmax.max){
             minmax.max = a[i];
         }
         else if(a[i] < minmax.min){
             minmax.min = a[i];
         }
     }
     return minmax;
}
int main(){
	long long int arr[] = { 1000, 11, 445, 1, 330, 3000, 564646 };
    int arr_size = sizeof(arr)/sizeof(arr[0]);
	struct Pair minmax = getMinMax(arr, arr_size);
	cout<<minmax.min<<","<<minmax.max<<endl;
	return 0;
}
