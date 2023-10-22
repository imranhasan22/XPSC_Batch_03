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
       ll m,s,mx=0;
       cin>>m>>s;
       ll v[m];
       unordered_map<int,bool>mp;
       for(int i=0;i<m;i++)
       {
          cin>>v[i];
          mp[v[i]]=true;
          mx=max(mx,v[i]);
       }
       ll  ans=1;
        while(s>0)
        { 
        while(mp[ans]==true)
         {
           ans++;
         }
         mx=max(mx,ans);
         s=s-ans;
         mp[ans]=true;
        }
       // cout<<mp.size()<<endl;
      //  cout<<s<<endl;
        if(s==0 && mp.size()==mx)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }
    
    return 0;
}