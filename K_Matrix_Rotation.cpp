// #include<bits/stdc++.h>
// using namespace std;
// bool fun(int n1,int n2,int n3,int n4)
// {
//   return (n1<n2) && (n1<n3) && (n3<n4) && (n2<n4); 
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        int n1,n2,n3,n4;
//        cin>>n1>>n2>>n3>>n4;
//        if(fun(n1,n2,n3,n4)|| fun(n3,n1,n4,n2)||  fun(n4,n3,n2,n1)||fun(n2,n4,n1,n3))
//        cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       
       vector<int>v(4);
       for(int i=0;i<4;i++)
       cin>>v[i];
       
       int mn=*min_element(v.begin(),v.end());
       int mx=*max_element(v.begin(),v.end());
       if((mn==v[0] && mx==v[3]) || (mn==v[3] && mx==v[0]) || (mn==v[1] && mx==v[2]) || (mn==v[2] && mx==v[1]))
       {
        cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;


    }
    return 0;
}
