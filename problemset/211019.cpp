/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 09.02.2024 17:59:46
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string stone;
    cin >> stone;

    if (stone == "space")
        cout << "blue";
    else if (stone == "mind")
        cout << "yellow";
    else if (stone == "reality")
        cout << "red";
    else if (stone == "power")
        cout << "purple";
    else if (stone == "time")
        cout << "green";
    else if (stone == "soul")
        cout << "orange";
}