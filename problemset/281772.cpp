#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char &x : s)
    {
        if (x == 'm')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}