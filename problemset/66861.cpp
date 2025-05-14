#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{

    int k;
    cin >> k;

    ll good = 0;
    for (ll i = 1; i <= 10e6; i++)
    {
        good += i;
        ll cnt = 0;
        for (ll j = 1; j <= good; j++)
        {
            if (good % j == 0)
            {
                cnt++;
                // cout << j << " ";
            }
        }
        // cout << endl<< good << " -> " << cnt << endl;
        if (cnt >= k)
        {
            cout << good;
            return 0;
        }
    }
}