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

void sorting (link* ptr){
     for(link* i =ptr;i!=nullptr;i= i->next){
        link* minnode= i;
        for(link* j = i->next;j!=nullptr;j=j->next){
          if(j->data<minnode->data){
            minnode= j;
          } 
        }
        int temp = i->data;
        i->data = minnode->data;
        minnode->data = temp;
     }
   
}

link *delete_3rd(link *head,int index){
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




int main()
{
    link *head;
    link *second;
    link *third;
    link *fourth;
    link *fifth;
    link *six;
    link *seven;


    head = new link();
    second = new link();
    third = new link();
    fourth = new link();
    fifth = new link();
    six = new link();
    seven  = new link();

    head->data = 59;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = fifth;

    fifth->data = 19;
    fifth->next = six;

    six->data = 25;
    six->next = seven;

    seven->data = 8;
    seven->next = nullptr; 

    cout<<"Main linked list "<<endl;
    display(head);

    cout<<endl;

    cout<<"after sorting  : "<<endl;
    sorting(head);
    display(head);
    
    cout<<endl;

    cout<<"Deleting 3rd element : "<<endl;
    head = delete_3rd(head,2);
    display(head);
    

    return 0 ;
}
