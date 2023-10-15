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
      for(int i=0;i<n;i++)
      cin>>v[i];
      for(int i=0;i<n;i++)
      {
        int k;string s;
        cin>>k>>s;
        for(auto c:s)
        { 
        if(c=='U')
        {
            v[i]--;
            if(v[i]==-1)
            {
              v[i]=9;
            }
        }
        else 
        {
           v[i]++;
           if(v[i]==10)
           v[i]=0;
        }
        }
       
      }
      for(auto c:v)
      {
        cout<<c<<" ";
      }
      cout<<endl;

    }
    return 0;
}