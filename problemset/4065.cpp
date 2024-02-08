/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:14:59
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, l;
    cin >> a;
    cin >> b;
    cin >> l;

    int A, B;
    A = ceil(l / 2.);
    B = floor(l / 2.);

    int ans = A * a + B * b;
    cout << ans;
}