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
       string s[3][n];
       int count[3];
       for(int i=0;i<3;i++)
        count[i]=0;
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
       }
       map<string,int>m;
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<n;j++)
        {
           m[s[i][j]]++;
        }
       }
       for(int i=0;i<3;i++)
       {
        for(int j=0;j<n;j++)
        {
           if(m[s[i][j]]==3)
              count[i]+=0;
           else if(m[s[i][j]]==2)
              count[i]+=1;
           else if(m[s[i][j]]==1)
             count[i]+=3;
        }
       }
       for(int i=0;i<3;i++)
       cout<<count[i]<<" ";
       cout<<endl;
    }
    return 0;
}