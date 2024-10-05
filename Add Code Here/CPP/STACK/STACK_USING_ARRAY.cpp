#include<stdio.h>
#include<iostream>
using namespace std;
class arr_stack
{  
    private :
           int capacity , top ,*ptr;

    public :
           arr_stack();
           void createstack(int );
           void push(int);
           int peek();
           bool isfull();
           bool isempty();
           void pop();
           void display();
           ~arr_stack();
};
arr_stack::arr_stack()
{
    ptr = NULL;
}
void arr_stack::createstack(int cap)
{
    capacity = cap;
    top = -1;
    if (ptr!=NULL)
      delete [] ptr;
    ptr = new int[capacity];
}
bool arr_stack::isfull()
{
    return (top==capacity);
}
bool arr_stack::isempty()
{
    return (top==-1);
}
void arr_stack::push(int data)
{
    if(top==capacity)
      cout<<"OVERFLOW";
    else 
    {
        top++;
        ptr[top]=data;
    }
}
int arr_stack::peek()
{
    if(ptr==NULL)
     cout<<"UNDERFLOW";
    return ptr[top];
}
void arr_stack::pop()
{
    if(ptr==NULL)
     cout<<"UNDERFLOW";
    else 
    {
        top--;
    }
}
void arr_stack::display()
{
    for (int i=0;i<=top;i++)
       cout<<ptr[i];
}
arr_stack::~arr_stack()
{
    if(ptr!=NULL)
      delete ptr;
}
int main()
{
    arr_stack a;
      int choice;
    while(1)
    {
    cout<<"--*MENU*---"<<endl;
    cout<<"1.Create array"<<endl;
    cout<<"2.PUSH"<<endl;
    cout<<"3.POP"<<endl;
    cout<<"4.PEEK"<<endl;
    cout<<"5.Display"<<endl;
    cout<<"6.EXIT"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1 :
             int cap;
             cout<<"Enter capacity : ";
             cin>>cap;
             a.createstack(cap);
             break;
        case 2 :
             int data;
             cout<<"Enter data : ";
             cin>>data;
             a.push(data);
             break;
        case 3 :
             a.pop();
             break;
        case 4 :
             int save;
             save=a.peek();
             cout<<save;
             break;
        case 5 :
             a.display();
             break;
        case 6 :
             exit(0);
        default :
             cout<<"WRONG CHOICE"<<endl;
    }
  }
}