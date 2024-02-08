/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:16:05
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, ans, nums[100], x = 0;
    cin >> a;
    cin >> b;

    for (int i = a + 1; i < b; i++)
    {
        bool flag = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            nums[x++] = i;
    }

    for (int i = 0; i < x - 1; i++)
    {
        cout << nums[i] << ',';
    }
    cout << nums[x - 1];
}