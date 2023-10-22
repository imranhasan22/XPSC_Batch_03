#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int MOD=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll a=1;
       ll n,k;
       cin>>n>>k;
       for(int i=0;i<k;i++)
       a=(((a%MOD)*(n%MOD))%MOD);
       cout<<a<<endl;
    }
    return 0;
}