#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string ss="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
       string s;
       cin>>s;
      int x=ss.find(s);
       if(x==-1)
       {
        cout<<"NO"<<endl;
       }
       else cout<<"YES"<<endl;

    }
    return 0;
}