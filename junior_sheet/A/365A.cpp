#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int magicnum(int n)
{
    int i=1;
    while (n!=0)
    {
        int temp = 1<<n;
        i = (i|temp);
        n--;
    }
    return i;
}
 
bool checkmagicnum(int temp, int mn)
{
    int result = 0;
    while (temp!=0)
    {
        int k = temp%10;
        k = (1<<k);
        result = result | k;
        temp /=10;
    }
    int temp2 = result & mn;
    if (temp2 == mn)
    {
        return true;
    }
    return false;
}
 
 
void solve ()
{
    long long int n, k; cin>>n>>k;
    int mn = magicnum(k);
    int count = 0;
    for (int i=0 ;i<n; i++)
    {
        int temp; cin>>temp;
        bool flag = checkmagicnum(temp, mn);
        if (flag == true)
        {
            count++;
        }
    }
    cout<<count;
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