//sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;


void solve ()
{
    int n; cin>>n;
    if (n==0)
    {
        cout<<1; return;
    }
    n = (n-1)%4;

    if ( n== 0 ) cout<<8;
    if ( n== 1) cout<<4;
        if ( n== 2 ) cout<<2;
    if ( n== 3) cout<<6;
    return;


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