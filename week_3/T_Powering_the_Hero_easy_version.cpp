#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       priority_queue<ll>pq;
       ll sum=0;
       for(int i=0;i<n;i++)
       {
         ll a;
         cin>>a;
         pq.push(a);
         if(a==0)
         {
           sum+=pq.top();
           pq.pop();
         }
       }
       cout<<sum<<endl;
    }
    return 0;
}