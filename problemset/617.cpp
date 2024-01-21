#include <iostream>
using namespace std;

int main()
{
    int n;
    bool ans = true;
    cin >> n;
    string num = to_string(n);

    for (int i = 0, j = num.length(); i < j; i++)
    {
        if (num[i] != num[j - i - 1])
        {
            ans = false;
            break;
        }
    }

    if (ans)
        cout << "YES";
    else
        cout << "NO";
}