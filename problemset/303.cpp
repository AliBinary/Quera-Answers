/*
    author:  AliBinary
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 07.06.2024 15:58:14
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, n1;
    cin >> n >> n1;
    while (n > 0)
    {
        cout << n << endl;
        int temp = n;
        n = n1 - n;
        n1 = temp;
    }
}