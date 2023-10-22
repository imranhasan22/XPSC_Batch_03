#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       
       ll n;
       cin>>n;
       string s;
       cin>>s;
       string ss="";
       for(ll i=2;i<n;i++)
       ss.push_back(s[i]);
       ll ans=1;
       for(ll i=0;i<n-2;i++)
       {
        if(s[i]!=ss[i])
        ans++;
       }
       cout<<ans<<endl;
    }
    return 0;
}