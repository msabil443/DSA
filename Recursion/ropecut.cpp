//Rope cutting problem using recursion: Given the size of the rope and different size, give the maximum times it can be cut
//check palindrome of string using recursion
#include <bits/stdc++.h>
using namespace std;

// void nto1 (int n)
// {
//     if (n < 1)
//     {
//         return;
//     }
//     cout<<n<<endl;
//     return nto1(n-1);
// }

bool pal (string s, int left, int right)
{
    if (left == right)
    {
        return true;
    }
    if (s[left] != s[right])
    {
        return false;
    }
    return pal(s, ++left, --right);
}

int ropecut (int n, int a, int b, int c, int count)
{
    if (n<c && n!=0)
    {
        return -1;
    }
    if (n == 0)
    {
        return count;
    }
    if (n>=c){count++; n-=c;}
    else if (n>=b){count++; n-=b;}
    else if (n>=a){count++; n-=a;}
    // cerr<<count<<endl;
    return ropecut(n, a, b, c, count);
}


int main ()
{
    int n;
    cin>>n;
    vector<int> v(3);
    for (int i=0 ;i<3; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    cout<<ropecut(n, v[0], v[1], v[2], 0)<<endl;
    // nto1(n);
    return 0;
}