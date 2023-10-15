#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
        bool flag=false;
       string s;
       string s1="";
       cin>>s;
       for(auto i='a';i<='z';i++)
       {
        if(s.find(i)==-1)
        {
            s1=i;
            flag=true;
            break;
        }
       }
       if(flag==true)
       {
        cout<<s1;
       }
       else
       cout<<"None"<<endl;
    }
    return 0;
}