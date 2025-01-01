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

int main ()
{
    int n;
    // cin>>n;
    string s;
    cin>>s;
    // cerr<<s.length();
    cout<<(bool)pal(s, 0, s.length()-1)<<endl;
    // nto1(n);
    return 0;
}