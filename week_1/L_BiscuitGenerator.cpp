#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    // int t;
    // cin>>t;
    
    // while(t--)
    // {
       int a,x,c;
       cin>>a>>x>>c;
       int b=0;
       for(int i=a;i<=(c+0.5);i=i+a)
       {
           b+=x;
       }
       cout<<b;
    // }
    // return 0;
}