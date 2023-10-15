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
       vector<int>v(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
       map<int,int>m;
       for(int i=0;i<n;i++)
       m[v[i]]++;
       bool flag=false;
       for(auto i:m)
       {
        if(i.second>=3)
        {
           cout<<i.first<<endl;
           flag=true;
           break;
        }
       }
       if(flag==false)
       cout<<-1<<endl;
       
        }
    
    return 0;
}