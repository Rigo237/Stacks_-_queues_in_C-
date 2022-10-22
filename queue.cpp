#include<iostream> // Implementation.cpp
#include<iostream>
#define MAX 5

using namespace std;

class Queue
{
    public:
    int front, rear;
    int queue_array[MAX];
    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return front == MAX-1;
    }
public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int x)
    {
        if(!isFull())
        {
            queue_array[++front] = x;
            if(rear == -1)
                rear = 0;
        }
        else
            cout << "Queue is Full!" << endl;
    }

    void dequeue()
    {
        if(!isEmpty())
        {
            if(rear == front)
                rear = front = -1;
            else
                rear++;
        }
        else
            cout << "Queue is Empty!" << endl;
    }

    void display()
    {
        if(!isEmpty())
        {
            cout<<"Displaying..."<<endl;
            for(int i=rear;i<=front;i++)
                cout << queue_array[i] <<endl;
            cout << endl;
        }
        else
            cout << "Queue is Empty!" << endl;
    }
};

int main()
{
    Queue q;
    int element,ch,result;
    while(1)
    {
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.ENQUEUE  2.DEQUEUE  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.EXIT"<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter element: ";
        cin>>element;
        q.enqueue(element);
    }
    else if(ch==2)
    {
        q.dequeue();
    }
    else if(ch==3)
    {
        q.display();
    }
    else if(ch==4)
    {
        if(q.isFull())
            cout<<"...The Queue is Full..."<<endl;
        else
            cout<<"...The Queue is not FULL..."<<endl;
    }
    else
    return 0;
    }
    return 0;
}
