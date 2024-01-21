#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, l;
    cin >> a;
    cin >> b;
    cin >> l;

    int A, B;
    A = ceil(l / 2.);
    B = floor(l / 2.);

    int ans = A * a + B * b;
    cout << ans;
}