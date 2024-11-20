#include <iostream>
using namespace std;

struct link
{
    int data;
    link *next;
};

void display(link *ptr)
{
    while (ptr != nullptr)
    {
        cout << "Elements : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

link *insertion_first(link*head,int data){
    link *ptr= new link();
    link * p= head;
    ptr->data=data;
    ptr->next=p;
    return ptr;

}

link *insertion_index(link*head,int data,int index){
    link *ptr= new link();
    link * p= head;
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

link *insertion_end(link*head,int data){
    link *ptr= new link();
    ptr->data=data;
    link *p= head;
    while(p->next!=nullptr){
        p=p->next;

    }
    p->next=ptr;
    ptr->next=nullptr;
    return head;

}


int main()
{
    link *head;
    link *second;
    link *third;

    head = new link();
    second = new link();
    third = new link();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    cout<<"Main linked list "<<endl;
    display(head);

    cout<<endl;
    cout<<"After insertion at first "<<endl;  
    head=insertion_first(head,69);
    display(head);

    cout<<endl;
    cout<<"Insertion between : "<<endl;
    head=insertion_index(head,31,3);
    display(head);

    cout<<endl;
    cout<<"Insertion at end : "<<endl;
    head=insertion_end(head,5);
    display(head);


    return 0 ;
}
