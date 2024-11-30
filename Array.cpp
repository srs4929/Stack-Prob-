#include<bits/stdc++.h>
using namespace std;
int n=100;
int st[100];
int top=-1;

void push(int x)
{
    if(top>=(n-1))
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {   
        top++;
        st[top]=x;
        
    }
}

void pop()
{
    if(top==-1) cout<<"Stack underflow"<<endl;
    else
    {
       cout<<"The popped element is" <<endl;
       cout<<st[top]<<endl;
       top--;
    }
}

void display()
{
    cout<<"The elements are"<<endl;
    for(int i=top;i>=0;i--)
    {
        cout<<st[i]<<endl;
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
        else if(x==4)
        {
            cout<<"exit"<<endl;
            break;
        }
    }
}
    
