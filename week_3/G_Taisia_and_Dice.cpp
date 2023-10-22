#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int n,s,r;
       cin>>n>>s>>r;
       int value=s-r;
       cout<<value<<" ";
       for(int j=2;j<=n;j++)
       {
         while(r-value<n-j)
         value--;
         cout<<value<<" ";
         r=r-value;
       }
       cout<<endl;
    }
    return 0;
}