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

void push(string Stack[], int maxSize, string value)
{
    if(isFull(maxSize))
    {
        cout<< "Stack Overflow! Cannot push " << value << endl;
    }
    else
    {
        Top++;
        Stack[Top] = value;
        cout<< "Pushed: " << value << " at position " << Top << endl;
    }
}

string pop(string Stack[])
{
    if (isEmpty())
    {
        cout << "Stack Underflow! Cannot pop any more elements." << endl;
        return "";
    }
    else
    {
        string value = Stack[Top];
        cout << "Popped: " << value << " from position " << Top << endl;
        Top--;
        return value;
    }
}

string peek(string Stack[])
{
    if (isEmpty())
    {
        cout << "Stack is empty. Nothing to peek." << endl;
        return "";
    }
    else
    {
        cout << "Peeked: " << Stack[Top] << " from position " << Top << endl;
        return Stack[Top];
    }
}


int main()
{
    string Stack[5];

    int maxSize = sizeof(Stack)/sizeof(Stack[0]);

    // pushing 5 items
    push(Stack, maxSize, "a");
    push(Stack, maxSize, "b");
    push(Stack, maxSize, "c");
    push(Stack, maxSize, "d");
    push(Stack, maxSize, "e");
    push(Stack, maxSize, "f");

    // pop 2 items
    pop(Stack);
    pop(Stack);

    // peek
    peek(Stack);

}
