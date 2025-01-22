#include <iostream>
using namespace std;

// stack implementation

int Top = -1;

// checking Underflow
bool isEmpty()
{
    return (Top== -1);
    // returns True if stack is empty
}

// checking Overflow
bool isFull(int maxSize)
{
    return (Top == maxSize-1);

}



void push(int  Stack[], int maxSize, int value)
{
    if(isFull(maxSize))
    {
        cout<< "Stack Overflow! Cannot push " << value << endl;
    }
    else
    {
        Top++;
        Stack[Top] = value;
    }
}



int pop(int Stack[])
{
    if (isEmpty())
    {
        cout << "Stack Underflow! Cannot pop any more elements." << endl;
        return -1;
    }
    else
    {
        int value = Stack[Top];
        cout << "Popped: " << value << " from position " << Top << endl;
        Top--;
        return value;
    }
}

void display(int Stack[],int maxSize) {
    if (isFull(maxSize)) {
        cout << "Stacks is full." << endl;
    } else {
        for (int i = Top; i >= 0; --i) {
            cout <<"Element "<<i<<" = "<< Stack[i] << " "<<endl;
        }
        cout << endl;
    }
}



int main()
{
    int Stack[5];

    int maxSize = sizeof(Stack)/sizeof(Stack[0]);
    int n;
    cout<<"Enter size = ";
    cin>>n;


    // Add three elements to the stack
    cout << "\nAdding elements to the stack:" << endl;
    for (int i = 1; i <= n; ++i) {
        int element;
        cout << "Enter element " << i << ": ";
        cin >> element;
        push(Stack, maxSize, element);
    }

    // Show the elements of the stack
    cout << "\nStack after adding elements:" << endl;
    display(Stack,maxSize);

    // Remove the last two elements from the stack
    cout << "\nRemoving the last two elements:" << endl;
    for (int i = 0; i < 2; ++i) {
        pop(Stack);
    }

    // Show the remaining elements of the stack
    cout << "\nFinal state of the stack:" << endl;
    display(Stack,maxSize);

   
    

}
