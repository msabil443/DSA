//Program to print numbers from n to 1 using recursion
#include <bits/stdc++.h>
using namespace std;

void nto1 (int n)
{
    if (n < 1)
    {
        return;
    }
    nto1(n-1);
    cout<<n<<endl;
    return;
}

int main ()
{
    int n;
    cin>>n;
    nto1(n);
    return 0;
}