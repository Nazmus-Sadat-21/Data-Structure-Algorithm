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

link *deletefirst(link * head){
    link *ptr=head;
    head = head->next;
    free(ptr);
    return head;
}

link *delete_atindex(link *head,int index){
    link *p = head;
    link *q = head->next;
    for(int i=0;i<index-1;i++){
        p = p->next;
        q = q->next; 
    }
    p->next = q->next;
    free(q);
    return head;

}

link *delete_atend(link*head){
  
    link *p= head;
    link *q = head->next;
    while(q->next!=nullptr){
        p = p->next;
        q = q->next; 

    }
    p->next=q->next;
    free(q);
    
    return head;

}


int main()
{
    link *head;
    link *second;
    link *third;
    link *fourth;
    link *fifth;

    head = new link();
    second = new link();
    third = new link();
    fourth= new link();
    fifth = new link();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data=4;
    fourth->next=fifth;

    fifth->data=5;
    fifth->next=nullptr;

    cout<<"Main elements : "<<endl;
    display(head);

    cout<<endl;

    cout<<"After delete first element : "<<endl;
    head = deletefirst(head);
    display(head);
    
    cout<<endl;

    cout<<"After delete from index  : "<<endl;
    head = delete_atindex(head,2);
    display(head);

    cout<<endl;

    cout<<"After delete laast element : "<<endl;
    head = delete_atend(head);
    display(head);


    return 0 ;
}

