#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
       int a,b,c;
       cin>>a>>b>>c;
       bool flag=false;
       int x;
       for(int i=a;i<=b;i++)
       {
          if(i%c==0)
          {
             x=i;
             flag=true;
             break;
          }
       }
       if(flag==true)
       cout<<x<<endl;
       else cout<<-1<<endl;
    
    return 0;
}