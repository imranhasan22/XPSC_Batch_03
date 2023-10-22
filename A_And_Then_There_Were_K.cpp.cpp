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
       int c=0;
       while(n>1)
       {
        n>>=1;
        c++;
       }
        int k=1<<c;
        cout<<k-1<<endl;

    }
    return 0;
}