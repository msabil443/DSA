//Sum of n natural numbers using recursion  
#include <bits/stdc++.h>
using namespace std;

void nto1 (int n)
{
    if (n < 1)
    {
        return;
    }
    cout<<n<<endl;
    return nto1(n-1);
}

int sumofn (int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n+sumofn(n-1);
}

int main ()
{
    int n;
    cin>>n;
    // nto1(n);
    cout<<sumofn(n)<<endl;
    return 0;
}