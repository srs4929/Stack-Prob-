// C++ program to check for balanced brackets.
#include <bits/stdc++.h>
using namespace std;


bool ispar(const string& s) { 
  
    
    stack<char> p;
    for (int i = 0; i < s.length(); i++) {
        
        char c=s[i];
        if (c== '(' || c == '{' || c == '[') {
            p.push(c); 
        } 
      
        else {
            if(!p.empty()&&((c==')'&&(p.top()=='('))||(c=='}'&&(p.top()=='{'))||(c==']'&&(p.top()=='[')))) p.pop();
            else return false;
        }
    }
    
    
    return p.empty();
}

int main() {
  
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {  string s;
       cin>>s;
    if (ispar(s))
        cout << "YES"<<endl;
    else
        cout <<"NO"<<endl;;
    }
    return 0;
}
