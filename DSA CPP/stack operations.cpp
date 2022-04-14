#include<bits/stdc++.h>
using namespace std;
int main(){

	int stack [5];
	int top = -1;
	void push{
		int x;
		cout<<x<<endl;
		if (top == n-1){
			cout<<"overflow"<<endl;
		}
		else{
			top++;
			stack[top] == x;
		}
	}
	void pop{
		int temp;
		if (top == -1){
			cout<<"underflow"<<"endl";
		}
		else{
			temp = stack[top];
			top--;
			cout<<"popped item is "<<temp<<endl;
		}
	}
	void peek{
		if (top == -1){
			cout<<"stack is empty"<<endl;
		}
		else{
			cout<<"topmost element is "<<stack[top];
		}
	}
	void display{
	int i;
	for(i=top;i>=0;i--){
		cout<<stack[i]<<" "<<endl;
	}
	}

}
