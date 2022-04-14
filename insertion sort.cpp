#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"arrey length"<<endl;
	cin>>n;
	int arr[n];
	cout<<"arrey value "<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=1; i<n; i++){
		int curr = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > curr){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = curr;
	}
	cout<<"printing final sorted arrey : "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
