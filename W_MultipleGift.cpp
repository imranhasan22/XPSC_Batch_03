#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() 
{
    
    long long X, Y;
    cin >> X >> Y;

    ll l =1;     
    while (X * 2 <= Y) 
    {
        X*= 2;
        l++;
    }
    cout << l << endl;

    return 0;
}
