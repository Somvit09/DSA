#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
	int s = 0;
	int e = n;
	int temp = -1;
	while(s<=e){
		int mid = (s+e) / 2;
		if (arr[mid] == key){
			temp = mid;
			break;
		}
		else if(arr[mid] > key){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	if(temp == -1){
		cout<<"value not found"<<endl;
	}
	else{
		cout<<"element found at index "<<temp<<endl;
	}
	return 0;
}
int main(){
	int n;
	cout<<"enter len of arrey"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the values of the arrey"<<endl;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	int key;
	cout<<"enter the value to find in the arrey"<<endl;
	cin>>key;
	cout<<binarysearch(arr, n, key)<<endl;
	return 0;
}
