#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
       string s;
      // string s1="";
       cin>>s;
       for(int i=0;i<s.size();i=i+2)
       {
        
       cout<<s[i];

    }
    cout<<endl;
    }
    return 0;
}