#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
   { 
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
       vector<ll>ans(n);
       ans=v;
       vector<ll>v2(n+1,0);
       vector<ll>ans2(n+1,0);
       sort(ans.begin(),ans.end());
      //  v2[0]=0;
      //  ans2[0]=0;
      //  v2[1]=v[0];
      //  ans2[1]=ans[0];
       for(int i=0;i<n;i++)
       {
         v2[i+1]=v[i]+v2[i];
         ans2[i+1]=ans[i]+ans2[i];
       }
       ll q;
       cin>>q;
       while(q--)
       {
         ll a,b,c;
         cin>>a>>b>>c;
         if(a==2)
         cout<<ans2[c]-ans2[b-1]<<endl;
         else
         cout<<v2[c]-v2[b-1]<<endl;
       }
   }
    
    return 0;
}