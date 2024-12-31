//Brian Kirmingham algorithm
#include <bits/stdc++.h>
using namespace std;

int countset (int n)
{
    int res = 0;
    while (n>0)
    {
        n= n & (n-1);
        res++;
    }
    return res;
}


int main ()
{
    int n; cin>>n;
    cout<<countset(n)<<endl;
    return 0;
}