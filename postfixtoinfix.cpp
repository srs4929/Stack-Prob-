#include<bits/stdc++.h>
using namespace std;

bool oper(char x)
{
    return ((x>='a'&&x<='z')||(x>='A' && x<='Z'));
}

string infix(string x)
{
    stack<string>ch;

    for(int i=0;i<x.size();i++)
    {
       char a=x[i];
        if(oper(a))
        {
           string op(1,a);
           ch.push(op);
        }
        else
        {
            string op1=ch.top();
            ch.pop();
            string op2=ch.top();
            ch.pop();
            ch.push("("+op2+a+op1+")");
        }
    }
    return ch.top();
}

int main()
{
    string x;
    cin>>x;
    cout<<infix(x)<<endl;
}