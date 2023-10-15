#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       char s[8][8];
       for(int i=0;i<8;i++)
       for(int j=0;j<8;j++)
       cin>>s[i][j];
       int x=-1,y=-1;
       for(int i=0;i<8;i++)
       {
        for(int j=0;j<8;j++)
        {
            if(s[i][j]=='#')
            {
                if(i>0 && j>0 && i<7 && j<7 && s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#')
               {  x=i+1;
                y=j+1;
               }
            }
        }
       }
       cout<<x<<" "<<y<<endl;
    }
    return 0;
}