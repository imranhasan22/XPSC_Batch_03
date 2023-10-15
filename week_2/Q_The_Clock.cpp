
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{   
int h, m,k;
char d;
string pk, ok;
cin>>h>>d>>m>>k; 
int all=h*60+m;
int t=all;
int ans=0;
while(1)
{
h=all/60;
m=all%60;
if((m%10*10+m/10)==h)
ans++;
all+=k;
all%=1440;
if(all==t)break;
}
cout<<ans<<endl;
}	
return 0;
}