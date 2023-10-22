#include<bits/stdc++.h>
using namespace std;
int lcm(int x,int y)
{
    return (x/__gcd(x,y))*y;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int x,y,k;
       cin>>x>>y>>k;
       
       while(x!=y && k--)
       {
        if(x>y)
        { 
           x=__gcd(x,y);
          y=lcm(x,y);
        }
        else
        {
            y=__gcd(x,y);
            x=lcm(x,y);
        }
       }
       cout<<x+y<<endl;

    }
    return 0;
}