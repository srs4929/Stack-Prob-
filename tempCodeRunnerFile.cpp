#include<bits/stdc++.h>
using namespace std;

int result(int op1,int op2,char c)
{
    if(c=='+') return op1+op2;
    else if(c=='-') return op1-op2;
    else if(c=='*') return op1*op2;
    else if(c=='/') return op1/op2;
    else return 0;

}

int evalute(string x)
{
    stack<int>p;
    for(int i=0;i<x.size();i++)
    {
        char a=x[i];
        if(isdigit(a))
        {
            p.push(a-'0');
        }

        else
        {
            int op2=p.top();
            p.pop();
            int op1=p.top();
            p.pop();
            int ans=result(op1,op2,a);
            p.push(ans);
        }

    }
    return p.top();
}

int main()
{
    string x;
    cin>>x;
    cout<<evalute(x)<<endl;
}
