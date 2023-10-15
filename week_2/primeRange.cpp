#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  
       
        int n,m;
        cin>>n>>m;
       
        while(n<m)
        {
        bool flag=true;
        if(n<=1)
        flag =false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            flag=false;
            break;
        }
        if(flag)
        cout<<n<<endl;
        n++;
        }
    
    return 0;
}