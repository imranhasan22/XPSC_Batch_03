#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n][n-1];
        for(ll i=0;i<n;i++)
        for(ll j=0;j<n-1;j++)
        cin>>arr[i][j];

        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        m[arr[i][n-2]]++;
        ll x=0;
        for(auto c:m)
        if(c.second>1)
        {
            x=c.first;
            break;
        }

        ll index=-1;
        for(ll i=0;i<n;i++)
        if(arr[i][n-2]!=x)
          {
            arr[i][n-1]=x;
            index=i;
            break;
          }
    
       if(index!=-1)
       for(ll j=0;j<n;j++)
       cout<<arr[index][j]<<" ";
       cout<<endl;
    }
    return 0;
}