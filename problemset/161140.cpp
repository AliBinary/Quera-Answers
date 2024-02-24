/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 24.02.2024 21:22:21
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b + c == 180 && !a && !b && !c)
        cout << "Yes";
    else
        cout << "No";
}