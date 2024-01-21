#include <iostream>
using namespace std;

bool prime(int);

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for (int i = a; i <= b; i++)
    {
        if (prime(i))
            cout << i << '\n';
    }
}

bool prime(int x)
{
    bool ans = true;
    if (x == 1)
        return false;
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            ans = false;
            break;
        }
    }
    return ans;
}
