/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:14:37
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;

    if (x + y + z == 180)
        if (x != 0 & y != 0 & z != 0)
            cout << "Yes";
        else
            cout << "No";
    else
        cout << "No";

    return 0;
}