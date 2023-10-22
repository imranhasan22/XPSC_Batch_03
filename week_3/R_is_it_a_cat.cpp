// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     regex x("[mM]+[eE]+[oO]+[wW]+");
//     if(regex_match(s,x))
//     cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       string s;
       cin>>s;
        string T="meow";
       for(int i=0;i<n;i++)
       {
         if(s[i]<=90)s[i]+=32;
       }
       
     
      string ss="";
      for(int i=0;i<n;i++)
      {
        if(ss.empty() || ss.back()!=s[i])
        {
           ss.push_back(s[i]);
        }
        
      }
      if(ss==T)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;


    }
    return 0;
}