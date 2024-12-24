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




}
