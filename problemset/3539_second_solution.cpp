/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 24.02.2024 21:19:41
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s = 0;
    cin >> n;
    int N = log10(n);
    while (n > 9)
    {
        for (int i = 0; i <= N; i++)
        {
            s += n % 10;
            n = n / 10;
        }
        n = s;
        s = 0;
    }
    cout << n;
}