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
       vector<int>v(n);
        map<int,int>m;
       for(int i=0;i<n;i++)
       {
          cin>>v[i];
          m[v[i]]++;
       }
       int c=0;
       sort(v.begin(),v.end());
       for(int i=0;i<n;i++)
       {
        int value=v[i];
        if(m[v[i]]!=0)
        {
          c++;
          while(m[value]>0)
          {
            m[value]--;
            value++;
          }
          
        }
       }
       cout<<c<<endl;
       
      


    }
    return 0;
}