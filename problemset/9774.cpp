/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:14:46
*/

#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int num;

    for (int i = 0; i < n.length(); i++)
    {
        num = n[i] - 48;
        cout << num << ": ";
        for (int i = 0; i < num; i++)
            cout << num;
        cout << endl;
    }
}