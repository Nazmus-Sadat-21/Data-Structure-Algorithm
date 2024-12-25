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

link* deletefirst(link* head){
    link * p = head;
    head=head->next;
    head->prev=nullptr;
    free(p);
    return head;


}

link* delete_index(link* head,int index){

    link* p = head;
    link* q = head->next;


    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q);
    return head;
 }

link* delete_last(link* head){
    link* p = head;
    link* q= head->next;
    while(q->next!=nullptr){
        p=p->next;
        q=q->next;
    }
    p->next=nullptr;
    free(q);
    return head;

}



int main(){

    link *head;
    link *second;
    link *third;
    link *fourth;

    head = new link();
    second = new link();
    third = new link();
    fourth = new link();

    head->value=1;
    head->next=second;
    head->prev=nullptr;

    second->value=2;
    second->next=third;
    second->prev=head;

    third->value=3;
    third->next=fourth;
    third->prev=second;

    fourth->value=4;
    fourth->next=nullptr;
    fourth->prev=third;

    display(head);
    cout<<endl;

    head = deletefirst(head);
    display(head);

    cout<<endl;
    head = delete_index(head,1);
    display(head);

    cout<<endl;
    head = delete_last(head);
    display(head);




}
