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
       vector<int>even;
       vector<int>odd;
       for(int i=0;i<n;i++)
       {
        if((v[i] & 1)==0)
        even.push_back(v[i]);
        else odd.push_back(v[i]);
       }
       if(even.size()==n || odd.size()==n)
       cout<<"YES"<<endl;
       else
       { 
    //    sort(even.begin(),even.end());
    //    sort(odd.begin(),odd.end());
    //    if(odd[0]<even[0])
    //    cout<<"YES"<<endl;
    //    else cout<<"NO"<<endl;
    //    }
       
      sort(v.begin(),v.end());
      int mn=v[0];
      if((mn & 1)!=0)
      cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
       
    }
    return 0;
}