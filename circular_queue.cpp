#include <iostream>
using namespace std;

const int SIZE = 5;
int queue[SIZE];
int front = -1;
int rear = -1;

bool isEmpty()
{
    return (front == -1);
}

bool isFull()
{
    return ((rear + 1) % SIZE == front);
}

void enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue Overflow! Cannot enqueue " << value << endl;
    }
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
}

int dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow! Cannot dequeue." << endl;
        return -1;
    }
    else
    {
        int value = queue[front];
        cout << "Dequeued: " << value << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
        return value;
    }
}

int peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty. Nothing to peek." << endl;
        return -1;
    }
    else
    {
        cout << "Front element: " << queue[front] << endl;
        return queue[front];
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    peek();

    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);

    peek();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}
