#include<bits/stdc++.h>
using namespace std;
bool fun(int n)
{
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int fun2(int n)
{
    int count=0;
    for(int i=2;i<=n;i++)
    { 
        int prime=0;
        for(int j=2;j<=i;j++)
        {
            if(fun(j) && i%j==0)
            {
                prime++;
            }
            if(prime>2)
            break;
        }
        if(prime==2)
        count++;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
       int n;
       cin>>n;
       cout<<fun2(n)<<endl;
}