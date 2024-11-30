#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* top=NULL;

void push(int x)
{
   node* newnode=new node;
   newnode->data=x;
   newnode->next=top;
   top=newnode;
}

void pop()
{
    if(top==NULL) cout<<"Stack underflow"<<endl;
    else
    {
        cout<<"The popped elements are "<<top->data<<endl;
        top=top->next;
    }
}

void display()
{
    node* ptr=top;
    if(top==NULL) cout<<"stack is empty"<<endl;
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;

        }
    }
}

int main()
{
    int n;
    cin>>n;
     cout<<"1 to push"<<endl;
    cout<<"2 to pop"<<endl;
    cout<<"3 to display"<<endl;
    cout<<"4 to exit"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int p;
            cin>>p;
            push(p);
        }
        else if(x==2)
        {
            pop();
        }
        else if(x==3)
        {
            display();
        }
        else
        {
            cout<<"Exit"<<endl;
            break;
        }
    }
}