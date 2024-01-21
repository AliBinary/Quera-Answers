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