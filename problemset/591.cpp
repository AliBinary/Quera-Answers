/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:16:19
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 0; j < n; j++)
            {
                cout << '*';
            }
            cout << '\n';
        }
        else
        {
            cout << '*';
            for (int j = 0; j < n - 2; j++)
            {
                cout << ' ';
            }
            cout << '*' << '\n';
        }
    }
}