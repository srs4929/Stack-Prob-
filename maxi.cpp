#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>p;
    stack<int>max;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int y;
            cin>>y;
            p.push(y);
            if(max.empty()||y>=max.top())
            {
                max.push(y);
            }
        }
        else if(x==2)
        {
            if(!p.empty())
            {
                if(p.top()==max.top())
                {
                    max.pop();
                }
                p.pop();
            }
        }
        else 
        {
            if(!max.empty())
            {
                cout<<max.top()<<endl;
            }
        }
    }
}