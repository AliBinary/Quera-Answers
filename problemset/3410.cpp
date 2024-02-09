/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:15:32
*/

#include <iostream>
using namespace std;

int fact(int);
int comb(int, int);
int per(int, int);

int main()
{
    int n, r;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << comb(i, j) << ' ';
        }
        cout << '\n';
    }
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int per(int n, int r)
{
    return fact(n) / fact(n - r);
}