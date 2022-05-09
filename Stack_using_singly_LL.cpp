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

class StackUsingSinglyLL{
	public:
		Node *top;
		
		StackUsingSinglyLL(){
			top = NULL;//constructor call
		}
		
		bool isEmpty(){
			if(top == NULL){
				return true;
			}
			else{
				return false;
			}
		}
		//check if same node exists
		bool chechIfNodeExist(Node *n){
			Node *temp = top;
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
		//push operation
		void push(Node *n){
			if(top == NULL){//stack have no elements
				top = n;
			}
			else if(chechIfNodeExist(n)){
				cout<<"same node of key value already exists"<<endl;//check for duplicate elements
			}
			else{
				Node *temp = top;//creating temp variable to store top value
				top = n;//initalizing top value with n(new node)
				n->next = temp;//now top->next will be temp
				cout<<"Node Pushed"<<endl;
			}
		}
		//pop function which will be a pointer
		Node* pop(){
			Node *temp = NULL;
			if(isEmpty()){//checking if the stack is empty or full
				cout<<"Stack Underflow"<<endl;//no elements in stack
				return temp;
			}	
			else{
				temp = top;//top means the last element or the topmost element of the stack
				top = top->next;//top is now pointing to the previous element
				return temp;//returning the topmost element
			}
		}
		//peek function
		Node* peek(){
			if(isEmpty()){//checking if the stack is empty or full
				cout<<"Stack Underflow"<<endl;//no elements in stack
				return NULL;
			}	
			else{
				return top;//returning the topmost element
			}
		}
		//count function
		int count(){
			int count = 0;
			Node *temp = NULL;
			while(temp != NULL){
				count++;
				temp = temp->next;//traversing through the stack
			}
			return count;
		}
		//printting all the nodes
		void display(){
			cout<<"All the values of the stack is : "<<endl;
			Node *temp = top;
			while(temp != NULL){
				cout<<"("<<temp->key<<","<<temp->data<<")"<<"->"<<endl;
				temp = temp->next;
			}
			cout<<"Total no of the nodes are : "<<count()<<endl;
		}
};



int main() {
  StackUsingSinglyLL s1;
  int option, key, data;

  do {
    cout << "What operation do you want to perform?" <<
      "Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. peek()" << endl;
    cout << "5. count()" << endl;
    cout << "6. display()" << endl;
    cout << "7. Clear Screen" << endl << endl;
    cin >> option;

    //Node n1 = new Node();
    Node * new_node = new Node();

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter KEY and VALUE of NODE to push in the stack" <<
        endl;
      cin >> key;
      cin >> data;
      new_node -> key = key;
      new_node -> data = data;
      s1.push(new_node);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << endl;
      new_node = s1.pop();
      cout << "TOP of Stack is: (" << new_node -> key << "," << new_node -> data << ")";
      delete new_node;
      cout << endl;

      break;
    case 3:
      if (s1.isEmpty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isEmpty()) {
        cout << "Stack is Empty" << endl;
      } else {
        cout << "PEEK Function Called : " << endl;
        new_node = s1.peek();
        cout << "TOP of Stack is: (" << new_node -> key << "," << new_node -> data << ")" <<
          endl;
      }
      break;
    case 5:
      cout << "Count Function Called: " << endl;
      cout << "No of nodes in the Stack: " << s1.count() << endl;
      break;

    case 6:
      cout << "Display Function Called - " << endl;
      s1.display();
      cout << endl;
      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}



















