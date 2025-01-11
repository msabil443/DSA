//sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;


void solve ()
{
    int x; cin>>x;
    char test;
    char test2;
    map<char,int> mp;
    for (int i=0 ;i<x; i++)
    {
        for (int j=0; j<x; j++)
        {
            
            char a; cin>>a;
            mp[a]++;
            if (i==0 && j==0) test = a;
            if (i==0 && j == 1) test2 = a;
            if (i == j && a != test) {cout<<"NO"; return;}
            if ((i+j)==(x-1) && a!= test) { cout<<"NO"; return;}
            if (i!=j && (i+j)!=(x-1) && a!=test2) {cout<<"NO"; return;}
        }
    }
    if (mp.size() != 2)
    {
        cout<<"NO";
        return;
    }
    cout<<"YES"; return;

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