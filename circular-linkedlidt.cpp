#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createCircularLinkedList(int arr[], int n) {
    Node* head = nullptr;
    Node* last = nullptr;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            newNode->next = head; 
            last->next = newNode; 
        }
        last = newNode;
    }

    return head;
}


void traverseCircularLinkedList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head); 

    cout << endl;
}


int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);


    Node* head = createCircularLinkedList(arr, n);

    cout << "Circular Linked List: ";
    traverseCircularLinkedList(head);

    return 0;
}
