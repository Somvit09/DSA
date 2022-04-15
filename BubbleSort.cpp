#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int n,int arr[]){
	for(int i = 0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			for(int i=0; i<n; i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\n"<<endl;
		}
	}
	return ;
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
	cout<<"\nSorting ....."<<endl;
	BubbleSort(n, arr);
	cout<<"\ndone."<<endl;
	cout<<"\nprinting final sorted arrey... "<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
