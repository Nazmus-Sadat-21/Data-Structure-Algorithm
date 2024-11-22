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

link *search_data(link *head,int data){
    bool exist=false;
    link * p =head;
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

int main()
{
    int input;
 
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

    cout<<"Enter a value : ";
    cin>>input;   
    search_data(head,input);
    cout<<endl;
      
    cout<<"Main List : "<<endl;
    display(head);

  

    return 0 ;
}
