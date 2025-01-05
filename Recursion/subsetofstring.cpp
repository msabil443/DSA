#include <bits/stdc++.h>
using namespace std;


void subset(string s, string t="", int i=0)
{
    if (i == s.length())
    {
        cout<<t<<endl;
        return;
    }
    subset(s, t, i+1);
    subset(s, t+s[i], i+1);
    return;
}

int main ()
{
    string s, t;
    cin>>s;
    t = "";
    int i = 0;
    subset(s, t, i);
    return 0;
}