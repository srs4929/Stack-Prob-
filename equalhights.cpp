#include<bits/stdc++.h>
using namespace std; //make three stacks equal
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    stack<int>h1;
    stack<int>h2;
    stack<int>h3;
    for(int i=0;i<x;i++)
    {   
        int x;
        cin>>x;
        h1.push(x);

    }
    for(int i=0;i<y;i++)
    {   
        int x;
        cin>>x;
        h2.push(x);
        
    }
    for(int i=0;i<z;i++)
    {   
        int x;
        cin>>x;
        h3.push(x);
        
    }
    int sum1=0,sum2=0,sum3=0;
    stack<int>x1;
    stack<int>x2;
    stack<int>x3;
    while(!h1.empty())
    {
         sum1+=h1.top();
         x1.push(h1.top()) ;
         h1.pop();   
    }
    while(!h2.empty())
    {
         sum2+=h2.top();
         x2.push(h2.top()) ;
         h2.pop();   
    }
   while(!h3.empty())
    {
         sum3+=h3.top();
         x3.push(h3.top()) ;
         h3.pop();   
    } 
    while(sum1!=sum2||sum2!=sum1)
    {
        if(sum1>sum2||sum1>sum3)
        {
            sum1-=x1.top();
            x1.pop();
        }
        if(sum2>sum3||sum2>sum3)
        {
            sum2-=x2.top();
            x2.pop();
        }
        if(sum3>sum1||sum3>sum2)
        {
            sum3-=x3.top();
            x3.pop();
        }
    }
    cout<<sum1<<endl;
}

