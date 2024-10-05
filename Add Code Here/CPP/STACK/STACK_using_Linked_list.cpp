#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{  
   int item;
   node *next;
};
class ll_stack
{
   private :
         node *top;
   
   public :
           ll_stack();
           void push(int);
           node* peek();
           bool isfull();
           bool isempty();
           void pop();
           void display();
           void reverse ();
          ~ll_stack();
};
ll_stack::ll_stack()
{
    top = NULL;
}
void ll_stack::push(int data)
{
    node *n =new node;
    n->item = data;
        n->next = top;
        top = n;
}
void ll_stack::pop()
{
    node *t;
    if (top == NULL)
      cout<<"LIST EMPTY";
    else 
     {
         t = top;
         top =t->next;
         delete t;
     }
}
node* ll_stack::peek()
{
     return top;
}
void ll_stack:: display()
{
   reverse();
   while (top)
    {
     cout<<top->item<<"  ";
     top = top->next;
    }

}
void ll_stack::reverse()
{
   ll_stack s1;
   while(top)
   {
      int save = reinterpret_cast<int>(peek());
      s1.push(save);
      pop();
   }
}
ll_stack:: ~ll_stack()
{
    node *t;
    t = top;
    while (t->next!=NULL)
      pop();
}
int main()
{
    ll_stack s;
      int choice;
    while(1)
    {
    cout<<"--*MENU*---"<<endl;
    cout<<"1.PUSH"<<endl;
    cout<<"2.POP"<<endl;
    cout<<"3.PEEK"<<endl;
    cout<<"4.Display"<<endl;
    cout<<"5.EXIT"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1 :
             int data;
             cout<<"Enter data : ";
             cin>>data;
             s.push(data);
             break;
        case 2 :
             s.pop();
             break;
        case 3 :
             node *save;
             save=s.peek();
             cout<<save;
             break;
        case 4 :
             s.display();
             break;
        case 5 :
             exit(0);
        default :
             cout<<"WRONG CHOICE"<<endl;
    }
  }
}