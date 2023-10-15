#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
       int candies=0;
       int mn=*min_element(v.begin(),v.end());
       for(int i=0;i<n;i++)
       {
         int x=v[i]-mn;
         candies+=x;
       }
       cout<<candies<<endl;

    }
    return 0;
}