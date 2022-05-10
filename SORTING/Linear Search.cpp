#include<iostream>
using namespace std;
int linearsearch(int arr[], int n, int key){
	int temp = -1;//for founding the element
	for(int i=0; i<n; i++){
		if(arr[i]==key){
			cout<<"element found at index "<<i<<endl;
			temp = 0;
			break;
		}
	}
	if(temp == -1){
		cout<<"no elements found in the arrey"<<endl;
	}
}
int main(){
	int n;
	cout<<"enter len of the arrey"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the values of the arrey"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int key;
	cout<<"enter the value to find"<<endl;
	cin>>key;
	linearsearch(arr,n , key);
	return 0;
}
