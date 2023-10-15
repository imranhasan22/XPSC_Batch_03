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
       char s[2][n];
       
       for(int i=0;i<2;i++)
       for(int j=0;j<n;j++)
       cin>>s[i][j];

       for(int i=0;i<2;i++)
       for(int j=0;j<n;j++)
       if(s[i][j]=='G')
       s[i][j]='B';

       bool flag=false;
       for(int j=0;j<n;j++)
       if(s[0][j]!= s[1][j])
        {
           flag=true;
           break;
        }
       if(flag==false)
       cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}