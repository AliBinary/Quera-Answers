#include <iostream>
using namespace std;

int main()
{
    int num, i, nums[1001] = {};

    for (i = 0;; i++)
    {
        cin >> num;
        if (!num)
            break;
        nums[i] = num;
    }
    for (--i; i >= 0; i--)
    {
        cout << nums[i] << endl;
    }
}