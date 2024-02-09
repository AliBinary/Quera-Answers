/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:12:30
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x = 1;
    cin >> n;
    while (n >= 2)
    {
        x *= n;
        n--;
    }

    cout << x;

    return 0;
}