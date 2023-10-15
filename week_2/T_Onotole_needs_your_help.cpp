#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
  //  cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       cin>>v[i];
       map<int,int>m;
       for(int i=0;i<n;i++)
       {
        m[v[i]]++;
       }
       for(auto c:m)
       {
         if(c.second==1)
         {
            cout<<c.first<<endl;
            break;
         }
       }

    }
    return 0;
}