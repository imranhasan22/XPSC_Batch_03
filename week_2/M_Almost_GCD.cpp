#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
       
          int n;
          cin>>n;
          vector<int>v(n);
          for(int i=0;i<n;i++)
          cin>>v[i];
          unordered_map<int,int>m;
          for(int i=2;i<=1000;i++)
          {
            int c=0;
            for(int j=0;j<n;j++)
            {
              if(v[j]%i==0)
              {
                c++;
              }
            }
            m[i]=c;
          }
          int sum=0,mxgcd=0;
          for(auto it:m)
          {
            if(it.second>mxgcd)
            {
              mxgcd=it.second;
              sum=it.first;
            }
          }
          cout<<sum<<endl;
    }
    return 0;
}