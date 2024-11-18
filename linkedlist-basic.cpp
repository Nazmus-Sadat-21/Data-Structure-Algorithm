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

    display(head);

    return 0 ;
}
