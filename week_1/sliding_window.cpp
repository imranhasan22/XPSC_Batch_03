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
        int ar[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
          int k;
          cin>>k;
        int i=0,j=0,s=0;
        while(j<n)
        {
           s+=ar[j];
           if(j>=k-1)
           {
            mx=max(mx,s);
            s-=ar[i];
            i++;
           }
           j++; 
        }
        cout<<mx<<endl;
       

    }
    return 0;
}