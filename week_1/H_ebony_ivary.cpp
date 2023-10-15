#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int x,y,z;
    int c=0;
    cin>>x>>y>>z;
    for (int i=0;i<=z/x;i++) 
    {
        if((z-i*x)%y==0) 
        {
            c=1;
            break;
        }
    }
    if(c==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}