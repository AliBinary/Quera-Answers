/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:15:47
*/

#include <iostream>
using namespace std;

int main()
{
    int num, i, nums[1001] = {};

    for (i = 0;; i++)
    {
        cin >> num;
        if (!num)
            break;
        nums[i] = num;
    }
    for (--i; i >= 0; i--)
    {
        cout << nums[i] << endl;
    }
}