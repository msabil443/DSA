#include <bits/stdc++.h>
using namespace std;

int oddocc (int n, vector<int> v)
{
    map<int, int> m;
    for (int i= 0; i<n ;i ++)
    {
        m[v[i]]++;
    }
    map<int,int>::iterator mpi;
    int result = 0;
    for (mpi=m.begin(); mpi!=m.end(); mpi++)
    {
        if (mpi->second & 1)
        {
            result = mpi->first;
        }
    }
    return result;
}

vector<int> oddocc_efficient (int n, vector<int> v)
{
    int result = 0;
    for (int i=0 ;i<n; i++)
    {
        result = result ^ v[i];
    }
    int countset = result & ~(result-1);
    int result1 = 0, result2 = 0;
    for (int i=0 ; i<n ;i++)
    {
        if ((v[i]&countset)!=0)
        {
            result1 ^= v[i];
        }
        else
        {
            result2 ^= v[i];
        }
    }
    return {result1, result2};
}

int main ()
{
    int n; cin>>n;
    vector<int>v(n);
    for (int i=0 ;i<n ;i++)
    {
        cin>>v[i];
    }
    vector<int>result (2);
    result = oddocc_efficient(n, v);
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}