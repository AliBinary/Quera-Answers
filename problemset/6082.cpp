/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 08.02.2024 13:15:03
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        for (int j = 0; j < m; j++)
            if (x[j] == '*')
                ans++;
    }

    cout << ans;
}