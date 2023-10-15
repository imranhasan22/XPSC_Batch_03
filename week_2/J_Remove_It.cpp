#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n,x;
       cin>>n>>x;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
       for(int i=0;i<n;i++)
       {
         if(v[i]==x)continue;
         cout<<v[i]<<" ";
       }
    }
    return 0;
}