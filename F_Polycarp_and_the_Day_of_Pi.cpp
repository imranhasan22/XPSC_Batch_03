#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      
	string s1="314159265358979323846264338327";
    string s2;
	cin>>s2;
	
		int k=0;
		for(int i=0;i<s2.size();i++)
        {
            if(s2[k]==s1[k])
            k++;
        }
		cout<<k<<endl;
	}
    return 0;
}