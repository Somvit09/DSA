#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n;
	cout<<"enter row and column"<<endl;
	cin>>m>>n;
	cout<<"enter values of the matrix : "<<endl;
	int arr[m][n], A[m][n];
	
	for(int i = 0; i<m; i++){
		for(int j = 0; j < n; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"the matrix is ..."<<endl;
		for(int i = 0; i<m; i++){
			for(int j = 0; j < n; j++){
				cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"transposing the matrix...."<<endl;
	for(int i = 0; i<m; i++){
		for(int j = 0; j < n; j++){
			A[i][j] = arr[j][i];
		}
	}
	cout<<"done.."<<endl;
	for(int i = 0; i<m; i++){
		for(int j = 0; j < n; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}		
}
