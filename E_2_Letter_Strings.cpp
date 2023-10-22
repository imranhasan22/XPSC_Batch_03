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
       vector<string>v(n);
       map<string,ll>m;
       map<char,ll>m1,m2;
       for(ll i=0;i<n;i++)
       {
          cin>>v[i];
          m[v[i]]++;
          m1[v[i][0]]++;
          m2[v[i][1]]++;
       }
       ll sum=0;
       for(ll i=0;i<n;i++)
       {
        ll xd=(m1[v[i][0]]-m[v[i]]);
        sum+=xd;
        ll xd2=(m2[v[i][1]]-m[v[i]]);
        sum+=xd2;
        if(m1[v[i][0]]>0) m1[v[i][0]]--;
        if(m2[v[i][1]]>0) m2[v[i][1]]--;
        if(m[v[i]]>0) m[v[i]]--;
       }
       cout<<sum<<endl;

    }
    return 0;
}