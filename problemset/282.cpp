/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:12:02
*/

#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;

    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
            sum += i;
    }
    if (sum == N)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}