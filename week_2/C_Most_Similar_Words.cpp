#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n,l;
       cin>>n>>l;
       vector<string>v(n);
       for(int i=0;i<n;i++)
       {
         cin>>v[i];
       }
       int mn=INT_MAX;
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
        for(int j=i+1;j<v.size();j++)
        {
          int sum=0;
          for(int k=0;k<l;k++)
          {
            sum+=abs(v[i][k]-v[j][k]);
          }
          mn=min(mn,sum);
        }
       }
       cout<<mn<<endl;
    }
    return 0;
}