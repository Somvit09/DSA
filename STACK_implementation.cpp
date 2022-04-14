#include<bits/stdc++.h>
#include<string>
using namespace std;
class Stack{
	private:
		int top;
		int arr[5];
	public:
		Stack(){
			top = -1;
			for(int i=0;i<5;i++){
				arr[i] = 0;
			}
		}
		bool isEmpty(){
			if(top == -1){
				return true;
			}
			else{
				return false;
			}
		}
		bool isFull(){
			if(top == 4){
				return true;
			}
			else{
				return false;
			}
		}
		void Push(int val){
			if(isFull()){
				cout<<"stack overflow "<<endl;
			}
			else{
				top++;
				arr[top] = val;
			}
		}
		int Pop(){
			if(isEmpty()){ 
				cout<<"stack underflow "<<endl;
			}
			else{
				int poppeditem = arr[top];
				arr[top] = 0;
				top--;
				return poppeditem;
			}
		}
		int count(){
			return (top+1);
		}
		int peek(int pos){
			if(isEmpty()){
				cout<<"stack underflow "<<endl;
			}
			else{
				return arr[pos];
			}
		}
		void change(int pos, int val){
			arr[pos] = val;
			cout<<"value has been changed at location "<<pos<<endl;
		}
		void display(){
			cout<<"all values of the stack is "<<endl;
			for(int i=4; i>=0; i--){
				cout<<arr[i]<<endl;
			}
		}
};
int main(){
	Stack s;
	int option, pos, value;
	do{
		cout<<"select an operation, 0 to exit."<<endl;
		cout<<"1. push()"<<endl;
		cout<<"2. pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. clear_screen()"<<endl;
		
		cin>>option;
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"enter an item"<<endl;
				cin>>value;
				s.Push(value);
				break;
			case 2:
				cout<<"popped item is "<<s.Pop()<<endl;
				break;
			case 3:
				if(s.isEmpty()){
					cout<<"stack is empty  "<<endl;
				}
				else{
					cout<<"stack is not empty  ";
				}
				break;
			case 4:
				if(s.isFull()==true){
					cout<<"stack is full  "<<endl;
				}
				else{
					cout<<"stack is not full  ";
				}
				break;
			case 5:
				cout<<"enter the position to know the element "<<endl;
				cin>>pos;
				cout<<"the top element is "<<s.peek(pos)<<endl;
				break;
			case 6:
				cout<<"the total elements is "<<s.count()<<endl;
				break;
			case 7:
				cout<<"enter the position and value to change element in stack  "<<endl;
				cin>>pos>>value;
				s.change(pos, value);
				break;
			case 8:
				s.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"enter proper option "<<endl;	
		}
	}while(option!=0);
	return 0;
}
	

