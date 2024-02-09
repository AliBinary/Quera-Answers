/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:12:20
*/

#include <iostream>
using namespace std;

int main()
{
    int n, num, max = NULL;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > max)
            max = num;
    }

    cout << max;
}