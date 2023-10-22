#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       
       int n,k;
       cin>>n>>k;
       vector<pii>v(n);
       vector<int>v2(n);
       vector<int>v3(n);
       for(int i=0;i<n;i++)
       {
        cin>>v[i].first;
        v[i].second=i;
       }
       sort(v. begin(),v.end());
       for(int i=0;i<n ;i++)
       cin>>v2[i];
       sort(v2.begin(),v2.end());
       for(int i=0;i<n;i++)
       v3[v[i].second]=v2[i];
       for(auto c:v3)
       cout<<c<<" ";
       cout<<endl;
    }
    return 0;
}