#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a;
    cin>>a;
    int c=0;
    vector<int>v;
    while(a!=0)
    { 
     int x=a%10;
      v.push_back(x);
     c++;
     a=a/10;
   }
   if(c<=4)
   {
     int size = 4-c;
   for(int i=0; i<size; i++)
   {
    v.push_back(0);
   }
   reverse(v.begin(), v.end());
   for(int i=0; i<v.size(); i++)
   {
    cout<<v[i];
   }
   }

}