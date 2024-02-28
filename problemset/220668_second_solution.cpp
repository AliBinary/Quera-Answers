/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 28.02.2024 13:17:23
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string state(n, '0');

    for (int j = 0; j < m; ++j)
    {
        int s, l;
        cin >> s >> l;
        s--;
        if (s + l - 1 < n)
        {
            int x = -1, cnt = 0;
            for (int i = s; i < n; ++i)
            {
                if (state[i] == '1')
                    cnt = 0;
                else
                    cnt++;
                if (cnt >= l)
                {
                    x = i;
                    break;
                }
            }
            if (x != -1)
                for (int i = x - l + 1; i < x + 1; ++i)
                {
                    state[i] = '1';
                }
        }
        cout << state << '\n';
    }
}