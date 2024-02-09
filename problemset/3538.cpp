/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:15:11
*/

#include <iostream>
using namespace std;

int main()
{
    int a, x = 0;
    string week[7] = {}, day;
    bool flag;

    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> day;
        flag = true;
        for (int i = 0; i < x; i++)
        {
            if (week[i] == day)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            week[x++] = day;
    }
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> day;
        flag = true;
        for (int i = 0; i < x; i++)
        {
            if (week[i] == day)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            week[x++] = day;
    }
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> day;
        flag = true;
        for (int i = 0; i < x; i++)
        {
            if (week[i] == day)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            week[x++] = day;
    }

    cout << 7 - x;
}