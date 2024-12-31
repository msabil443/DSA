//using brain kirmingham & pre computation
#include <bits/stdc++.h>
using namespace std;

vector<long long> v (256);

void initialize()
{
    for (long long i=1; i<256; i++)
    {
        v[i]=v[i&(i-1)]+1;
    }
    return;
}


long long countset (long long n)
{
    long long x = 255;
    long long n1, n2, n3, n4;
    n1 = n & x;
    cerr<<n1<<endl;
    n>>=8;
    cerr<<n<<endl;
    n2 = n & x;
    cerr<<n2<<endl;
    n>>=8;
        n3 = n & x;
    n>>=8;
        n4 = n & x;
    return v[n1]+v[n2]+v[n3]+v[n4];
}


long long main ()
{
    initialize();
    long long n;
    cin>>n;
    cout<<"output:"<<countset(n);
    return 0;
    }