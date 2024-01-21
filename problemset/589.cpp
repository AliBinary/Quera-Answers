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