#include <bits/stdc++.h>
using namespace std;


bool pow2 (int n)
{

    if (n == 0)
    {
        return false;
    }

    while (n!=1)
    {
        if (n & 1)
            return false;

        n>>=1;
    }
    return true;

}

bool pow2_efficient (int n)
{
    if (n == 0)
    {
        return false;
    }

    if ((n & (n-1)) == 0)
    {
        return true;
    }
    // cerr<< (n & (n-1))<<endl;
    return false;
}

int main ()
{
    int n;
    cin>>n;
    cout<<pow2_efficient(n)<<endl;
    return 0;
}