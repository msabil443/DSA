#include <bits/stdc++.h>
#include <algorithm>
using namespace std;



void solve ()
{
    long long int a, b; 
    cin>>a>>b;
    if (a&1)
    {
        a++;
    }
    if (a+2>b)
    {
        cout<<-1;
    }
    else
    {
        cout<<a<<" "<<a+1<<" "<<a+2;
    }
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