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
       ll n;
       cin>>n;
       vector<ll>v(n);
       ll sum=0;
       for(int i=0;i<n;i++)
       cin>>v[i];
       for(int i=0;i<n;i++)
       sum+=v[i];
       if(sum%2==0)
       cout<<sum<<endl;
       else
       {
        ll mn=INT_MAX;
         for(int i=0;i<n;i++)
         {
            
            if(v[i]%2!=0)
            {
                mn=min(mn,v[i]); 
            }
            
         }
         cout<<sum-mn<<endl;
       }
       

    }
    return 0;
}