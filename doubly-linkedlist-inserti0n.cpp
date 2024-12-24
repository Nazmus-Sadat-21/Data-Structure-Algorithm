#include<iostream>
using namespace std;

struct link{
    int value;
    link* next;
    link* prev;
};
void display(link*ptr){

    link *p=ptr;
    while (p != nullptr)
    {
        cout << "Elements : " << p->value << endl;
        p = p->next;
    }

}

link* insertfirst(link* head, int data){
    link* ptr = new link();
    link * p = head;

    ptr->value = data;
    ptr->next= p;
    ptr->prev = nullptr;
    p->prev=ptr;
    return ptr;


}

link* insert_index(link* head,int data,int index){

    link* ptr = new link();
    link* p = head;

    for(int i=0;i<index-1;i++){
        p=p->next;
    }

    ptr->value = data;
    ptr->next = p->next;
    p->next=ptr;
    ptr->prev=p;
    return head;


}

link* insert_last(link* head,int data){
    link* ptr=new link();
    ptr->value=data;
    link* p = head;
    while(p->next!=nullptr){
        p=p->next;
    }
    ptr->next=nullptr;
    p->next=ptr;
    ptr->prev=p;
    return head;

}



int main(){

    link *head;
    link *second;
    link *third;

    head = new link();
    second = new link();
    third = new link();

    head->value=1;
    head->next=second;
    head->prev=nullptr;

    second->value=2;
    second->next=third;
    second->prev=head;

    third->value=3;
    third->next=nullptr;
    third->prev=second;

    display(head);
    cout<<endl;

    head = insertfirst(head,0);
    display(head);

    cout<<endl;
    head = insert_index(head,10,2);
    display(head);

    cout<<endl;
    head = insert_last(head,5);
    display(head);




}
