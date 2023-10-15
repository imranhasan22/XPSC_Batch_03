#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ar[n+3];
        for(ll i=1;i<=n;i++)
        cin>>ar[i];
        ll sum=0;
        sum=ar[1]-1;
        ll ans=sum;
        for(ll i=2;i<=n;i++)
        {
             if(i+ans<ar[i])
             {
                ll k=ar[i]-(i+ans);
                ans+=k;
                sum+=k;
             }
        }

        cout<<sum<<endl;
    }
    return 0;
}