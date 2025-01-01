//sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;

int sumofdig(int n,  int k)
{
    if (n<=0)
    {
        return k;
    }
    k+= (n%10);
    n /=10;
    return sumofdig(n, k);
}


int main ()
{
    int n;
    cin>>n;
    cout<<sumofdig(n, 0)<<endl;
    return 0;
}