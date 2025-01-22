#include <iostream>
using namespace std;

struct node {
  int data;
  node* next;
};

void printlinkedlist(node* node) {
  int c = 0; // Taken just for good looking output
  while (node != NULL) {
    if (c > 0) {
      cout << "->" << node->data;
    } else {
      cout << node->data;
      c++;
    }
    node = node->next;
  }
}

node *insertion_index(node*head,int data,int index){
    node *ptr= new node();
    node * p= head;
    int i=0;
    while (i!=index-1)
    {
       p=p->next;
       i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

node *search_data(node *head,int data){
    bool exist=false;
    node * p =head;
    while(p!=nullptr){
        if(p->data==data){
            cout<<"Data exist in linked list ";
            exist=true;
            break;

        }
        p =p->next;

    }
    if(!exist){
        cout<<"Data is not exist in linked list ";
    }

}

int main(){
  int n;
  cout << "Enter no. of nodes = ";
  cin >> n;

  int num;
  cout << "Enter the values for the nodes:" << endl;

  // Create the head node
  cin >> num;
  node* head = new node;
  head->data = num;
  head->next = NULL;

  // Initialize a pointer to construct the rest of the list
  node* temp = head;

  // Loop to create the remaining nodes
  for (int i = 1; i < n; i++) {
    cin >> num;
    node* newNode = new node;
    newNode->data = num;
    newNode->next = NULL;

    temp->next = newNode; // Link the current node to the new node
    temp = newNode;       // Move temp to the new node
  }
  // Print the linked list
    printlinkedlist(head);

    cout<<endl;
    cout<<"Insertion between : "<<endl;
    int position;
    cout<<"Enter position = ";
    cin>>position;
    cout<<endl;
    int insert;
    cout<<"Enter data = ";
    cin>>insert;
    head=insertion_index(head,insert,position);
    printlinkedlist(head);

    cout<<endl;
    int input;
    cout<<"Enter a value : ";
    cin>>input;   
    search_data(head,input);
    cout<<endl;

  // Free memory (optional but recommended)
   temp = head;
  // while (temp != NULL) {
  //   //node* toDelete = temp;
  //   temp = temp->next;
  //   //delete toDelete;
  // }

  return 0;
}
