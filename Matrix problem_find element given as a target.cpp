// problem : given a n X m matrix . write an algorithm to find that given value exists in matrix or not. 
//*Integers in each row are sorted in as ascending order from left to right and for column they are sorted in ascending 
// from top to bottom.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,m,target;
	cout<<"enter the nos of row and column"<<endl;
	cin>>n>>m;
	cout<<"enter target"<<endl;
	cin>>target;
	int x[n][m];
	cout<<"enter matrix values"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>x[i][j];
		}
	}
	cout<<"matrix will be.."<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<x[i][j]<<" ";
		}
		cout<<"\n";
	}
	int r = 0, c = m-1;
	bool found = false;
	while(r<n && c >=0){
		if(x[r][c] == target){
			found = true;
		}
		if(x[r][c] > target){
			c--;
		}
		else{
			r++;
		}
	}
	if(found == true){
		cout<<"found"<<endl;
		}
	else{
		cout<<"element doesnot exists"<<endl;
	}
	return 0;
}
