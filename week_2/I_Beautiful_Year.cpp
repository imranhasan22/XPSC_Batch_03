#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
   // cin>>t;
    while(t--)
    {
       int year,a,b,c,d,ans;
       cin>>year;
       while(true)
       {
        year++;
        ans=year;
        a=year%10;
        year=year/10;
        b=year%10;
        year=year/10;
        c=year%10;
        year=year/10;
        d=year%10;
        year=year/10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
        {
            cout<<ans<<endl;
            break;
        }
        year=ans;
       }

    }
    return 0;
}