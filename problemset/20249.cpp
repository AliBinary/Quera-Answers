/*
    author:  Ali
    Email: AliGhanbariCs@gmail.com
    GitHub: https://github.com/AliBinary
    created: 24.02.2024 21:22:12
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int x = 0, y = n - 1;
    while (x < y)
    {
        if (a[x] + a[y] <= k)
        {
            ans++;
            x += 1;
            y -= 1;
        }
        else
            y -= 1;
    }
    cout << ans;
}