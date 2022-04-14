#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int key, data;
		Node* next;
		
		Node(){
			key = 0;//using perticular key value to operate.
			data = 0;//data of the node given.
			next = NULL;//is always null or contains the node address of the next node.
		}
		Node(int k, int d){
			key = k;
			data = d;
		}
};

class SinglyLinkList{
	public:
		Node* head;
	SinglyLinkList(){
		head = NULL;
	}
	SinglyLinkList(Node *n){
		head = n;
	}
	
	//check if node exists using key value
	Node* nodeExists(int k){
		Node* temp = NULL;
		Node* ptr = head;
		while(ptr!=NULL){
			if(ptr->key==k){
				temp = ptr;
			}
			ptr = ptr->next;
		}
		return temp;
	}
	
	//append or add a node to a LL in the last position
	void appendNode(Node *n){
		if(nodeExists(n->key)!=NULL){
			cout<<"Node already exists"<<"\nthe node value is : "<<n->key<<endl;
		}
		else{
			if(head == NULL){
				head = n;
				cout<<"node appended"<<endl;
			}
			else{
				Node* ptr = head;
				while(ptr->next!=NULL){
					ptr = ptr->next;
				}
				ptr->next = n;
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
			n->next = head;
			head = n;
			cout<<"Node prepended"<<endl;
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
				n->next = ptr->next;//n->new pointer will have the next address of 
				//previous pointer which is ptr->next.
				ptr->next = n;//previous pointer ptr now have the new next address
				//of new node n.
				cout<<"Node Inseretd."<<endl;
			}
		}
	}
	
	//Delete node by an unique key.
	void deleteNode(int k){
		if(head == NULL){
			cout<<"LL is already empty. Can't delete anything."<<endl;
		}
		else if(head != NULL){
			if(head->key == k){
				head = head->next;
				cout<<"Node unlinked with the key value "<<k<<endl;
			}
			else{
				Node* temp = NULL;
				Node* prevptr = head;//previous ptr or initialized as head for traversing.
				Node* currentptr = head->next;//current ptr
				while(currentptr!=NULL){
					if(currentptr->key == k){
						temp = currentptr;
						currentptr = NULL;
					}
					else{
						prevptr = prevptr->next;
						currentptr = currentptr->next;
					}//while loop is for traversing and finding that perticular value 
					//which is to be deleted.
				}
				if(temp != NULL){//have found that value and stored in temp.
					prevptr->next = temp->next;//change the next pointer from that deleted
					//node.basically the next node is temp->next.so the next node is tranferred
					//to temp->next.
					cout<<"node unlinked with key value "<<k<<endl;
				}
				else{//node does not exixts.so it can't be deleted.
					cout<<"node doesn't exists"<<endl;
				}
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
			cout<<"No nodes present in LL"<<endl;
		}
		else{
			cout<<"SinlyLL values are : \n"<<endl;
			Node* temp = head;
			while(temp != NULL){
				cout<<"("<<temp->key<<", "<<temp->data<<")-->";
				temp = temp->next;
			}
		}
	}
};


int main() {

  SinglyLinkList s;
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
      s.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.insertNode(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNode(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.changeNode(key1, data1);

      break;
    case 6:
      s.printLL();

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











































































