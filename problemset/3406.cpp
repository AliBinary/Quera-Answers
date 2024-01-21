#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    swap(a[0], a[2]);
    swap(b[0], b[2]);

    int x = (int)a;
    int y = (int)b;

    if (x > y)
        cout << b << " < " << a;
    else if (x < y)
        cout << a << " < " << b;
    else
        cout << a << " = " << b;
}