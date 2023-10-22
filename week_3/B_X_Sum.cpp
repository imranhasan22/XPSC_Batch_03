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
       ll n,m;
       cin>>n>>m;
      vector<vector<ll>> v(n, vector<ll>(m));
       for(ll i=0;i<n;i++)
       for(ll j=0;j<m;j++)
       cin>>v[i][j];

       ll mx=INT_MIN;
       for(ll i=0;i<n;i++)
       {
        for(ll j=0;j<m;j++)
        {
           ll mxsum=0;
           mxsum+=v[i][j];
           ll ai=i-1;
           ll bj=j-1;
        
           while(ai>=0 && bj>=0)
           {
             mxsum+=v[ai][bj];
             ai--;
             bj--;
           }
           ai=i-1;
           bj=j+1;
         
           while(ai>=0 && bj<m)
           {
            mxsum+=v[ai][bj];
            ai--;
            bj++;
           }
           ai=i+1;
           bj=j-1;
           while(ai<n && bj>=0)
           {
            mxsum+=v[ai][bj];
            ai++;
            bj--;
           }
           ai=i+1;
           bj=j+1;
           while(ai<n && bj<m)
           {
            mxsum+=v[ai][bj];
            ai++;
            bj++;
           }
          mx=max(mx,mxsum);
        }
       }
    //    cout<<mx<<endl;
    }
    return 0;
}