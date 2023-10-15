#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
       int k;
       cin>>k;
       int a,b,c;
       int sum=0;
       for(int a=1;a<=k;a++)
       {
        for(int b=1;b<=k;b++)
        {
            for(int c=1;c<=k;c++)
            {
               int gcd=__gcd(__gcd(a,b),c);
               sum+=gcd;
            }
        }
       }
       cout<<sum;

    }
    return 0;
}