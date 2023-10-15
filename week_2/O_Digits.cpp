#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      int c=0;
      while(n!=0)
      {
        n=n/k;
        c++;
      } 
     cout<<c<<endl;
    }
    return 0;
}
