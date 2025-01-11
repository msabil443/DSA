//sum of digits of a number using recursion
#include <bits/stdc++.h>
using namespace std;

// int sumofdig(int n,  int k)
// {
//     if (n<=0)
//     {
//         return k;
//     }
    
//     k+= (n%10);
//     n /=10;
//     return sumofdig(n, k);
// }

void solve ()
{
    int x, y;
    cin>>x>>y;
    for (int i=0 ;i<x; i++)
    {
        for (int j= 0; j<y; j++)
        {
            char c;
            cin>>c;
            if (c != 'B' && c!= 'W' && c!= 'G')
            {
                cout<<"#Color"; return;
            }
            // cout<<c<<endl;
        }
    }
    cout<<"#Black&White"; return;
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