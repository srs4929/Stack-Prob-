#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    stack<char>p;

    for(int i=0;i<n.size();i++)
    {
        p.push(n[i]);
    }
    string x="";
   

    while(!p.empty())
    {
        x+=p.top();
        p.pop();
    }
    cout<<x<<endl;

}