#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
   // cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       char s[n];
       for(int i=0;i<n;i++)
          cin>>s[i];

       int c=0;
      
       for(int i=0;i<n;i++)
       {
         if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')
         c++;
       }
       cout<<c<<endl;


    }
    return 0;
}