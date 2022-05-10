#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cout<<"enter char size"<<endl;
	cin>>n;
	char x[n+1];
	cout<<"enter word .."<<endl;
	cin>>x;
	bool check = true;
	for(i=0;i<n;i++){
		if(x[i] != x[n-1-i]){
			check = false;
			break;
		}
	}
	if(check == true){
		cout<<"word is a palindrome"<<endl;
		}
	else{
		cout<<"word is not a palindrome"<<endl;
		}
	return 0;
}

