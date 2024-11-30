#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^') return 3;
    else if(c=='/'||c=='*') return 2;
    else if(c=='+'||c=='-') return 1;
    else return 0;
}

void infixtopostfix(string x)
{
    stack<char>s;
    string result;

    for(int i=0;i<x.size();i++)
    {
        char c=x[i];
       
        if((c>='0'&&c<='9')|| (c>='a'&&c<='z')|| (c>='A'&& c<='Z'))
        result+=c;
        else if(c=='(') 
        {
           s.push(c);
        }
        else if(c==')')
        {
            while(s.top()!='(')
            {
                result+=s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while(!s.empty()&& prec(c)<prec(s.top())||!s.empty()&&prec(c)==prec(s.top()) )
            {
                result+=s.top();
                s.pop();
            }
            s.push(c);
        }

        


    }
    while(!s.empty())
        {
            result+=s.top();
            s.pop();

        }

    cout<<result<<endl;

}

int main()
{
    string x;
    cin>>x;
    infixtopostfix(x);


}