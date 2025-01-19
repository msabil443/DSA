//sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;


void solve ()
{
    long long int n; cin>>n;
    if (n&1)
    {   
        int t = n+1;
        cout<<((t*t+2*t)/4)-(n*n/4);
    }
    else
    {
        cout<<n/2;
    }


}


int main ()
{
    int tt = 1;
    // cin>>tt;
    while (tt--)
    {
        solve();
    }    

    return 0;

}