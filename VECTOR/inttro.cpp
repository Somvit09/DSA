#include<bits/stdc++.h>
using namespace std;
void display (vector<int> &arr){//vector<data_type> address of that element, here a integer type array is declared as parameter
	for(int i = 0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	
}
int main(){
	vector<int> arr;
	cout<<"size";
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	display(arr);
	return 0;
}
