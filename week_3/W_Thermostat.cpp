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
       ll l,r,x,a,b;
       cin>>l>>r>>x>>a>>b;
      
       if(b<a) swap(a,b);
       if(abs(a==b))cout<<0<<endl;
       else if(b-a>=x)
       cout<<1<<endl;
       else if(r-b>=x || a-l>=x)
       cout<<2<<endl;
       else if(r-a>=x && b-l>=x )
       cout<<3<<endl;
       else cout<<-1<<endl;
       }
    return 0;
}