#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push(x);
    }

    vector<int>v;
    while(!p.empty())
    {
        v.push_back(p.top());
        p.pop();
    }
    if(n%2==0)
    {
        int targ=(n/2);
        for(int i=0;i<n;i++)
        {
            if(i==targ) continue;
            p.push(v[i]);
        }
    }
    else
    {
        int target=ceil(n/2);
        for(int i=0;i<n;i++)
        {
            if(i==target) continue;
            p.push(v[i]);
        }
    }

    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();

    }
}