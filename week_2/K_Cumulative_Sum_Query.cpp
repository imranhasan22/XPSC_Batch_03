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
       v2[0]=v[0];
       for(int i=1;i<n;i++)
         {
            v2[i]=v[i]+v2[i-1];
            
         }
         int q;
       cin>>q;
       while(q--)
       {
         int a,b;
         cin>>a>>b;
         int sum;
         if(a==0) sum=v2[b];
         else
         sum=v2[b]-v2[a-1];
         cout<<sum<<endl;

       }

    }
    return 0;
}