#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int ar[n];
       for(int i=0;i<n;i++)
       {
         cin>>ar[i];
       }
       int x;
       cin>>x;
       int i=0,j=0;
       queue<int>q;
       while(j<n)
       {
        if(ar[j]<0)
        q.push(ar[j]);
        if(j>=x-1)
        {
            if(q.size())
            cout<<q.front()<<" ";
            else cout<<0<<" ";
            if(ar[i]<0)
            q.pop();
            i++;
        }
        j++;
       }

    }
    return 0;
}