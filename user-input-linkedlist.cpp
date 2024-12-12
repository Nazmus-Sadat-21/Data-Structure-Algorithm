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

  // Free memory (optional but recommended)
  temp = head;
  while (temp != NULL) {
    //node* toDelete = temp;
    temp = temp->next;
    //delete toDelete;
  }

  return 0;
}
