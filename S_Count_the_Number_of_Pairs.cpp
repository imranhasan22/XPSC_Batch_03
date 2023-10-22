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
       ll n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       map<char,int>m;
       for(int i=0;i<s.size();i++)
       m[s[i]]++;
       ll count=0;
       for(char c='a';c<='z';c++)
       {
         int mn=min(m[c],m[(c-32)]);
         count+=mn;
         m[c]-=mn;
         m[(c-32)]-=mn;
       }
       for(char c='a';c<='z';c++)
       {
         ll xd=max(m[c],m[(c-32)]);
         ll mn=min(k,xd/2);
         count+=mn;
         k-=mn;
       }
       cout<<count<<endl;
    }
    return 0;
}