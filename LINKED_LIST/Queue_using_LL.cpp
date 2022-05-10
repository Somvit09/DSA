#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int key, data;
		Node * next;
		
	Node(){//constructor call
		key = 0;
		data = 0;
		next = NULL;
	}
	
	Node(int k, int d){//parameterized constructor call
		key = k;
		data = d;
		next = NULL;
	}
};

class Queue{
	public:
		Node *front;
		Node *rear;
		
		Queue(){
			front = NULL;
			rear = NULL;
		}
		bool isEmpty(){
			if(front == NULL && rear == NULL){
				return true;
			}
			else{
				return false;
			}
		}
		bool checkIfNodeExist(Node *n){
			Node *temp = front;
			bool exist = false;
			while(temp != NULL){
				if(temp->key == n->key){//comparing
					exist = true;
					break;
				}
				temp = temp->next;//traversing
			}
			return exist;
		}
		//enqueue operation
		void enqueue(Node *n){
			if(isEmpty()){
				front = n;
				rear = n;
				cout<<"node enqued successfully"<<endl;
			}
			else if(checkIfNodeExist(n)){
				cout<<"Node already exists"<<endl;
			}
			else{
				rear->next = n;
				rear = n;
				cout<<"Node enqueued successfully"<<endl;
			}
		}
		//dequeue operation
		Node *dequeue(){//it returns a pointer of type Node
			Node *temp = NULL;
			if(isEmpty()){
				cout<<"underflow condition"<<endl;
				return NULL;
			}
			else{
				if(front == rear){
					temp = front;
					front = NULL;
					rear = NULL;
					return temp;
				}
				else{
					temp = front;
					front = front->next;
					return temp;
				}
			}
		}
		//count operation
		int count(){
			int count = 0;
			Node *temp = front;
			while(temp != NULL){
				count++;
				temp = temp->next;
			}
			return count;
		}
		//display
		void display(){
			if(isEmpty()){
				cout<<"Queue is empty"<<endl;
			}
			else{
				cout<<"Queue values are : "<<endl;
				Node *temp = front;
				while(temp != NULL){
					cout<<"("<<temp->key<<","<<temp->data<<")"<<"->";
					temp = temp->next;
				}
				cout<<endl;
			}
		}
};


int main() {
  Queue q;
  int option,key, data;
 
  do {
    cout << "What operation do you want to perform?"
	 <<"Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. count()" << endl;
    cout << "5. display()" << endl;
    cout << "6. Clear Screen" << endl << endl;
 	 cin >> option;
 	 
	  //Node n1 = new Node();
	 Node * new_node = new Node();
	 
    
    switch (option) {
    case 0:
      break;
    case 1:
    	cout << "ENQUEUE Function Called -" <<endl;
      cout << "Enter KEY and VALUE of NODE to ENQUEUE "
		<<"in the Queue"
		<<endl;
      cin >> key;
      cin >> data;
      new_node->key = key;
      new_node->data = data;
      q.enqueue(new_node);
      break;
    case 2:
      cout << "DEQUEUE Function Called - " <<endl;
      new_node = q.dequeue();
      cout<<"Dequeued Value is: ("<<new_node->key<<","
		<<new_node->data<<")";
      delete new_node;
		cout<<endl;
      
      break;
    case 3:
    	cout << "isEmpty Function Called - " << endl;
      if (q.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is NOT Empty" << endl;
      break;
    case 4:
    	cout << "Count Function Called - " << endl;
      cout << "No of nodes in the Queue: " <<q.count()
		<<endl;
      break;
    case 5:
      cout << "Display Function Called - " << endl;
      q.display();
      cout << endl;
      break;
    
    case 6:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}
