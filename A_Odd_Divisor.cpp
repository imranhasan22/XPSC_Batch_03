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
       if((n& (n-1))==0)
       cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

    }
    return 0;
}