#include<bits/stdc++.h>
using namespace std;
class Queue{
	public:
		int arr[5];
		int front, rear;
	public:
		Queue(){
			front = -1;
			rear = -1;
			for(int i=0; i<5; i++){
				arr[i] = 0;
			}
		}
		bool isEmpty(){
			if(front == -1 && rear == -1){
				return true;
			}
			else{
				return false;
			}
		}
		bool isFull(){
			if(rear == 4){
				return true;
			}
			else{
				return false;
			}
		}
		void enqueue(int val){
			if(isFull()){
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty()){
				front = 0;
				rear = 0;
				arr[rear] = val;
			}
			else{
				rear++;
				arr[rear] = val;
			}
		}
		int dequeue(){
			int x;
			if (isEmpty()){
				cout<<"Queue is empty";
				return 0;
			}
			else if(front == rear){
				x = arr[front];
				arr[front] = 0;
				rear = -1;
				front = -1;
				return x;
			}
			else{
				x = arr[front];
				arr[front] = 0;
				front++;
				return x;
			}
		}
		int count(){
			if(isEmpty()){
				return 0;
			}
			else{
				return (rear-front+1);
			}
		}
		void display(){
			cout<<"All the values of the Queue are "<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<endl;
			}
		}
		
};
int main(){
	Queue q;
	int value, option;
	do{
		cout<<"select an operation, 0 to exit."<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. clear_screen()"<<endl;
		
		cin>>option;
		
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enqueue operation \n enter a value"<<endl;
				cin>>value;
				q.enqueue(value);
				break;
			case 2:
				cout<<"Dequeue operation \ndequeued value is "<<q.dequeue()<<endl;
				break;
			case 3:
				if(q.isEmpty()){
					cout<<"Queue is empty"<<endl;
				}
				else{
					cout<<"Queue is not empty"<<endl;
				}
				break;
			case 4:
				if(q.isFull()){
					cout<<"Queue is Full"<<endl;
				}
				else{
					cout<<"Queue is not full"<<endl;
				}
			case 5:
				cout<<"no of items in Queue is "<<q.count()<<endl;
				break;
			case 6:
				cout<<"the items of the queue is "<<endl;
				q.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"enter proper operation no. "<<endl;	
				
		}
	}while(option!=0);
	
	return 0;
}




















