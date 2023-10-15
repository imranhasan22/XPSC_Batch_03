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
       vector<int>v2(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
         int q;
       cin>>q;
       while(q--)
       {
         int a,b;
         cin>>a>>b;
         int sum=0;
         for(int i=a;i<=b;i++)
         {
            sum+=v[i];
         }
         cout<<sum<<endl;

       }

    }
    return 0;
}