#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,o,i,j,k;
	cout<<"enter row and column"<<endl;
	cin>>m>>n>>o;
	int a[m][n];
	int b[n][o];
	int ans[m][o];
	cout<<"enter values of the matrix A : "<<endl;
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"values of matrix A : "<<endl;
	for(i=0; i<m; i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"enter values of the matrix B : "<<endl;
	for(i=0; i<n; i++){
		for(j=0;j<o;j++){
			cin>>b[i][j];
		}
	}
	cout<<"values of matrix B : "<<endl;
	for(i=0; i<n; i++){
		for(j=0;j<o;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(i=0; i<m; i++){
		for(j=0;j<o;j++){
			ans[i][j] = 0;
		}
	}
	for(i=0; i<m; i++){
		for(j=0;j<o;j++){
			for(k=0;k<n;k++){
				ans[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	cout<<"multiplication will be ...."<<endl;
	for(i=0; i<m; i++){
		for(j=0;j<o;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}	
	return 0;
}
