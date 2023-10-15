#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       string s,t;
       cin>>s>>t;
       int count=0;
       for(int i=0;i<s.size();i++)
       {
           if(t[i]!=s[i])
           count++;
       }
       cout<<count<<endl;
    }
    return 0;
}