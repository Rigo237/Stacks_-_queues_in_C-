//implementation of stacks

#include<iostream>
#define maxsize 10
using namespace std;

class stack
{
    int top;
    int a[maxsize];
public:
    stack();
    bool isfull();
    bool isempty();
    void push(int x);
    void pop();
    void display();
    void Top();
    void size();
};

stack::stack()       // initialise the stack to zero(0) using default like constructor
    {
        top=0;
    }

bool stack::isfull()    // if the top of the stack is equal to the maximum element allowed in the stack, its full in size and can't push an element
    {
        if(top==maxsize)
            return true;
        else
            return false;
    }

bool stack::isempty()    // if the top of the stack is 0, then its empty and nothing to pop from the stack
    {
        if(top==0)
            return true;
        else
            return false;
    }

void stack::push(int x)
{
    if(isfull())
    {
        cout<<"---> The stack is full"<<endl;
        return;
    }
    else
    a[top]=x;   // if the stack is not full, element is pushed into stack at the top index of the stack
    top++;
}

void stack::pop()
{
    if(isempty())
    {
        cout<<"nothing in the list"<<endl;
        return;
    }
    else
        top--;     // if the stack is empty (when top is not equal to zero)
        cout<<"Pops "<<a[top]<<endl;
}

void stack::display()    // display the elements of the srack
    {
        int i;
        if(top==0)
        {
            cout<<"...........Nothing to Display.........."<<endl;
        }
        else
        cout<<"Dispalying..."<<endl;
        for(i=0; i<top; i++)
        {
            cout<<a[i]<<endl;
        }
    }

void stack::Top()   // to display the top of the element of the stack
{
    cout<<"Top is: "<<a[top-1]<<endl;
}

void stack::size()   // display the size of the stack
{
    cout<<"Size of the stack is "<<top<<endl;
}


int main()
{
    stack s;
    int element,ch,result;
    while(1)
    {
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.TOP  7.SIZE  8.EXIT"<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"Enter element: ";
        cin>>element;
        s.push(element);
    }
    else if(ch==2)
    {
        s.pop();
    }
    else if(ch==3)
    {
        s.display();
    }
    else if(ch==4)
    {
        if(s.isfull())
            cout<<"...The stack is Full..."<<endl;
        else
            cout<<"...The stack is not FULL..."<<endl;
    }
    else if(ch==6)
    {
        s.Top();
    }
    else if(ch==7)
    {
        s.size();
    }
    else
    return 0;
    }
    return 0;
}
