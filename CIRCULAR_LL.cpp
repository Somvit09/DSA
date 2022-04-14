#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int key, data;
		Node* next;

		Node(){
			key = 0;
			data = 0;
			next = NULL;

		}
		
		Node(int k, int d){
			key = k;
			data = d;
		}
};


class CircularLL{
	
	public:
		Node* head;
		
		CircularLL(){
			head = NULL;
		}

		
		//to check if the node exixts using a key value..
		Node* nodeExists(int k){
			Node* temp = NULL;
			Node* ptr = head;
			if(ptr == NULL){
				return temp;
			}
			else{
				
				//while(ptr!=head){we don't use the while loop at first cause
				//at first the condition ptr!=head  will executed and we all know the 
				// ptr value is assigned as head at first.so the line will not 
				// not execute properly and we got NULL value for temp everytime.
				//that's why we use the do-while loop for using the xondition at last.
					//if(ptr->key==k){
						//temp = ptr;
					//}
				//ptr = ptr->next;
				//}
				
				do{
					if(ptr->key == k){
						temp = ptr;
					}
					ptr = ptr->next;
				}while(ptr!=head);
				
				return temp;
			}

		}
		
	//append or add a node to a LL in the last position
	void appendNode(Node *n){
		if(nodeExists(n->key)!=NULL){
			cout<<"Node already exists"<<"\nthe node value is : "<<n->key<<endl;
		}
		else{
			if(head == NULL){
				head = n;
				n->next = head;
				cout<<"node appended"<<endl;
			}
			else{
				Node* ptr = head;
				while(ptr->next!=head){
					ptr = ptr->next;
				}
				ptr->next = n;
				n->next = head;
				cout<<"Node appended"<<endl;
			}
		}
	}
	
	//append a node at start or head position
	void prependNode(Node* n){
		if(nodeExists(n->key)!=NULL){
			cout<<"Node already exists"<<"\nthe node value is : "<<n->key<<endl;
		}	
		else{
			if(head == NULL){
				head = n;
				n->next = head;
				cout<<"node appended as head node. `"<<endl;
			}
			else{
				Node* ptr = head;
				while(ptr->next!=head){
					ptr = ptr->next;
				}
				ptr->next = n;
				
				n->next = head;
				head = n;
				cout<<"Node prepended"<<endl;
			}
		}
		
	}
	
	//Insert a node after a perticular node in the LL.
	void insertNode(int k, Node *n){
		Node* ptr = nodeExists(k);
		if(ptr==NULL){
			cout<<"no node exists with key value "<<k<<endl;//checking present 
			//k value in the node and if there was a node with k value exists or not.
		}	
		else{
			if(nodeExists(n->key)!=NULL){
				cout<<"Node already exists"<<"\nthe node value is : "<<n->key<<endl;
			}//checking k value given and if the node with k value is duplicate or not.
			else{
				//inserting node at last 
				if(ptr->next == head){
					ptr->next = n;//changes
					n->next = head;
					cout<<"Node inserted at the end"<<endl;
				}
				//inserting between two nodes
				else{
					n->next = ptr->next;
					ptr->next = n;
					cout<<"Node Inseretd."<<endl;
				}

			}
		}
	}
	
	//Delete node by an unique key.
	void deleteNode(int k){
		Node* ptr = nodeExists(k);
		if(ptr == NULL){//no matches found
			cout<<"no node exists with the key value "<<k<<endl;
		}
		else{
			if(head == NULL){
			cout<<"Circular LL is empty"<<endl;
			}//head is null
			
			else if(ptr == head){//head is the node to delete
				if(head->next == NULL){
					head = NULL;//if head have no reference or no next node/
					cout<<"Node unlinked"<<endl;
				}
				else{
					Node* ptr1 = head;//head have other nodes linked
					while(ptr1->next != head){
						ptr1 = ptr->next;//traversing
					}
					
					ptr1->next = head->next;//coming to the last node and pointing 
					//the last node's next pointer to the head's next pointer.
					head = head->next;//initializing head to the head's next node.
					cout<<"Node unlinked"<<endl;
				}
			}
			
			//other node linked between  two nodes in LL to delete 
			else{
				Node* temp = NULL;
				Node* prevptr = head;
				Node* currentptr = head->next;
				
				while(currentptr!=NULL){
					if(currentptr->key == k){
						temp = currentptr;
						currentptr = NULL;
					}
					else{
						prevptr = prevptr->next;
						currentptr = currentptr->next;
					}
				}
				
				prevptr->next = currentptr->next;
				cout<<"Node unlinked"<<endl;
			}			
		}
	}
	
	
	//change node data by k value with new node data .
	void changeNode(int k, int d){
		Node* ptr = nodeExists(k);
		if(ptr!=NULL){
			ptr->data = d;
			cout<<"Node data updated successfully at k value = "<<k<<endl;
		}
		else{
			cout<<"Node doesn't exixts with k value = "<<k<<endl;
		}
	}
	
	
	//printing LL
	void printLL(){
		if(head == NULL){
			cout<<"No nodes present in CircularLL"<<endl;
		}
		else{
			cout<<"CircularLL values are : \n"<<endl;
			Node* temp = head;
			do{
				cout<<"("<<temp->key<<", "<<temp->data<<")-->";
				temp = temp->next;
			}while(temp != head);
		}
	} 
	
		
};

int main() {

  CircularLL obj;
  int option;
  int key1, k1, data1;
  do {
		cout<<"\nselect an operation, 0 to exit."<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. insertNode()"<<endl;
		cout<<"4. deleteNode()"<<endl;
		cout<<"5. changeNode()"<<endl;
		cout<<"6. printLL()"<<endl;
		cout<<"7. clear screen()"<<endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      obj.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      obj.insertNode(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      obj.deleteNode(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      obj.changeNode(key1, data1);

      break;
    case 6:
      obj.printLL();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while(option != 0);

  return 0;
}

  

























































































