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
       bool flag=false;
       for(int i=2;i<=sqrt(n);i++)
       {
        if(n%i==0)
        {
          flag=true;
          break;
        }
       }
       if(flag==false)
       cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}