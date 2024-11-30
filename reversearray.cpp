#include<bits/stdc++.h>
using namespace std;

void rev(int arr[],int n)
{
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        st.push(arr[i]);
    }

    int i=0;

    while(!st.empty())
    {
        arr[i]=st.top();
        st.pop();
        i++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr,n);
}