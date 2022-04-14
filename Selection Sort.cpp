#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the len of the arrey"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the values of the arrey"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	cout<<"final sorted arrey is ---"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

