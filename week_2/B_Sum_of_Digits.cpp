#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
   // cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       int count=0;
       while(s.size()!=1)
       { 
        int sum=0;
        for(int i=0;i<s.size();i++)
        sum+=s[i]-'0';
        s=to_string(sum);
        count++;
       }
       cout<<count<<endl;
    }
    return 0;
}