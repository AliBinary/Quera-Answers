#include <iostream>
using namespace std;

const int N = 20;
int fibs[N] = {};

void write_fibs(int N)
{
    int x = 2;
    fibs[0] = 0;
    fibs[1] = 1;
    while (x < N)
    {
        fibs[x] = fibs[x - 1] + fibs[x - 2];
        x++;
    }
}

int main()
{
    bool flag;
    int n;
    cin >> n;
    write_fibs(N);

    for (int i = 1; i <= n; i++)
    {
        flag = false;
        for (int j = 0; j < N; j++)
        {
            if (fibs[j] == i)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << '+';
        else
            cout << '-';
    }
}