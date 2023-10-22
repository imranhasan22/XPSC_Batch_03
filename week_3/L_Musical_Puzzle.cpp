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
        string s;
        set<string>st;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            string s2="";
           s2+=s[i];
           s2+=s[i+1];
          
          st.insert(s2);
         
        }
         for(auto l:st)
           {
              cout<<l<<" ";
           }
        cout<<st.size()<<endl;
    }
    return 0;
}