#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
      int a,b;
      cin>>a>>b;
      if(a>b)
      cout<<0<<endl;
      else if(a==b)
      cout<<a+b<<endl;
      else
      cout<<(2*b)-1<<endl;
}