#include <bits/stdc++.h>
using namespace std;


void solve ()
{
    long long n, m; cin>>n>>m;
    long long a; cin>>a;
    // cout<<ceil(n/a)+ceil(m/a);
    long long x, y;
    x = n/a; y = m/a;
    if (n%a) x++;
    if (m%a) y++;
    cout<<x*y;

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