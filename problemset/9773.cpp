#include <iostream>
using namespace std;

int main()
{
    int n, a = 1;
    cin >> n;

    // ------------------------------------------

    for (int j = 0; j < (n - 1) / 2; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int i = 0; i < (n - a) / 2; i++)
                cout << ' ';
            for (int i = 0; i < a; i++)
                cout << '*';
            for (int i = 0; i < (n - a) / 2; i++)
                cout << ' ';
        }
        a += 2;
        cout << endl;
    }

    // ------------------------------------------

    for (int j = 0; j < n * 2; j++)
        cout << '*';
    cout << endl;

    // ------------------------------------------

    for (int j = 0; j < (n - 1) / 2; j++)
    {
        a -= 2;
        for (int i = 0; i < 2; i++)
        {
            for (int i = 0; i < (n - a) / 2; i++)
                cout << ' ';
            for (int i = 0; i < a; i++)
                cout << '*';
            for (int i = 0; i < (n - a) / 2; i++)
                cout << ' ';
        }
        cout << endl;
    }
}