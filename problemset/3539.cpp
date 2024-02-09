/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:15:06
*/

#include <iostream>
using namespace std;

long long int get_sum(long long int n)
{
    long long int sum = 0;
    do
    {
        sum += n % 10;
        n /= 10;
    } while (n / 10 != 0);
    sum += n % 10;

    return sum;
}

int main()
{
    long long int n = 0;
    cin >> n;

    while (n > 9)
    {
        n = get_sum(n);
    }
    cout << n;
    return 0;
}