#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
    {
        int k, s;
        cin>>k>>s;
        int count=0;
        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<=k;j++)
            {
                int d=s-i-j;
                if(d>=0 && d<=k)
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}