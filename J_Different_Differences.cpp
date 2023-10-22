#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int k,n,c;
       cin>>k>>n;
  
       vector<int>v;
       //v.push_back(c);
       for(int i=0;i<k;i++)
       {
          c=max(n,0);
          v.push_back(c);
          n=n-1-i;
       }
       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==0)
           {
            v[i]=i+1;
           }
           if(v[i]>=v[i+1])
           v[i+1]=i+2;
       }
        
       for(auto l:v)
       cout<<l<<" ";
       cout<<endl;
    }
    
    return 0;
}