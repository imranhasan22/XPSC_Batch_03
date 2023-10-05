#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
       int s,t;
       cin>>s>>t;
       int cx=0;
       for(int a=0;a<=s;a++)
       {
        for(int b=0;b<=s;b++)
        {
            for(int c=0;c<=s;c++)
            {
                if(a+b+c<=s && a*b*c<=t)
                cx++;
            }
        }
       }
       cout<<cx<<endl;

    }
    return 0;
}