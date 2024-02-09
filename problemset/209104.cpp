/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 09.02.2024 17:59:37
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string travels, nicknames[] = {"Haji", "Karbalaee", "Mashti"};
    cin >> travels;
    for (int i = 0; i < travels.length(); i++)
    {
        if (travels[i] == 'Y')
        {
            cout << nicknames[i];
            return 0;
        }
    }
    cout << "Agha";
}