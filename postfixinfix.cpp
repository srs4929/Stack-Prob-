//Input : abc++
//Output : (a + (b + c))

//Input  : ab*c+
//Output : ((a*b)+c)

#include<bits/stdc++.h>
using namespace std;
bool alpha(char x)
{
    if((x>='a'&&x<='z')||(x>='A'&&x<='Z')) return true;
    else return false;
}
string p(string x)
{
    stack<string>a;
    for(int i=0;i<x.size();i++)
    {
        char p=x[i];
        if(alpha(p))
        {
            string op(1,p);
            a.push(op);
        }
        else
        {
            string op1=a.top();
            a.pop();
            string op2=a.top();
            a.pop();
            a.push("("+op2+p+op1+")");

        }
    }
    return a.top();
}
int main()
{
    string x;
    cin>>x;
    cout<<p(x)<<endl;


}