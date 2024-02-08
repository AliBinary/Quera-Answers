/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:11:48
*/

#include <iostream>
using namespace std;

int main()
{
    bool answer = true;
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a < c)
        swap(a, c);
    if (a < b)
        swap(a, b);
    if (b < c)
        swap(b, c);

    if (((b * b) + (c * c)) != (a * a))
        answer = false;

    if (answer)
        cout << "YES";
    else
        cout << "NO";
}