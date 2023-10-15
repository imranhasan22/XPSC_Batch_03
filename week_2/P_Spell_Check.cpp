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
       string s1="Timur";
       sort(s1.begin(),s1.end());
       string s;
       cin>>s;
       if(n!=5)
       cout<<"NO"<<endl;
       else
       {
        sort(s.begin(),s.end());
        if(s==s1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
       }


    }
    return 0;
}