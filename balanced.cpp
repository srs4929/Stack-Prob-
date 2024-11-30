#include<bits/stdc++.h>
using namespace std;

bool result(string x)
{
   stack<char>s;
   for(int i=0;i<x.size();i++)
   {
      char c=x[i];
      if((c=='(')||(c=='[')||(c=='{'))
      {
         s.push(c);
      }
      else
      {
        if(!s.empty() && ((s.top()=='(' && c==')') || ((s.top()=='{' && c=='}'))||(s.top()=='['&&c==']')))
        {
            s.pop();
        }
        else return false;
      }
   } 
   return s.empty();
}

int main()
{
    string s;
    cin>>s;
    if(result(s))cout<<"true"<<endl;
    else cout<<"false"<<endl;
}

