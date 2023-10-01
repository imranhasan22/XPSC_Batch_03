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
       int ar[n];
       for(int i=0;i<n;i++)
       cin>>ar[i];
       int k;
       int mx=INT_MIN;
       cin>>k;
       int v[n];
       for(int i=0;i<=n-k;i++)
       { 
        int c=0;
        for(int j=i;j<i+k;j++ )
        {
            c+=ar[j];
            
        }
         mx=max(mx,c);
       }
       cout<<mx<<endl;
    }
    return 0;
}