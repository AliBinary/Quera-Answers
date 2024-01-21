#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x;
    cin >> n;

    if (n == 0)
        x = 20;
    else if (n > 7)
        x -= n;
    else if (n < 7 && n > 0)
        x -= n;

    if (x < 0)
        x = 0;

    cout << x;
}