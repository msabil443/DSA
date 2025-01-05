//Generate all the substrings of a given number using recursion
#include <bits/stdc++.h>
using namespace std;

void substr(string s, string t, int count)
{
    if (count == s.length())
    {
        cout<<t<<endl;
        return;
    }
    substr(s, t, count+1);
        // cout<<t<<endl;
    // t+= s[count];
    substr(s, t+s[count], count+1);
    // cout<<t<<endl;
    // substr(s, t, ++count);

    return;
}


int main ()
{
    int count = 0;
    string s; cin>>s;
    string t = "";
    substr(s, t, count);
    // nto1(n);
    return 0;
}