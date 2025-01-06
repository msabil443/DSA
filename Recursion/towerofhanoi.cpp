//tower of hanoi problem using recursion
#include <bits/stdc++.h>

using namespace std;

void tower_of_hanoi (int n, string a = "A", string b = "B", string c="C")
{
    if ( n== 1)
    {
        cout<<"Move 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    tower_of_hanoi(n-1, a, c, b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<endl;
    tower_of_hanoi(n-1, b, a, c);
}


int main ()
{
    int n;
    cin>>n;
    cout<<"Number of steps:"<<(1<<n)-1<<endl;
    tower_of_hanoi(n, "A", "B", "C");
    return 0;

}
