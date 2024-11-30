#include <bits/stdc++.h>
using namespace std;

int perform(int op1,int op2,char op)
{
    if(op=='+') return op1+op2;
    else if(op=='-') return op1-op2;
    else if(op=='*') return op1*op2;
    else if(op=='/') return op1/op2;
    else return 0;
}

int evalute(string x)
{
    stack<int>sh;
    for(int i=0;i<x.size();i++)
    {
       char c=x[i];
       if(isdigit(c))
       {
           sh.push(c-'0');
       }
       else
       {
           int op2=sh.top();
           sh.pop();
           int op1=sh.top();
           sh.pop();
           int result=perform(op1,op2,c);
           sh.push(result);
       }
    }
    return sh.top();
}

int main()
{
    string x;
    cin>>x;
    cout<<evalute(x)<<endl;

}