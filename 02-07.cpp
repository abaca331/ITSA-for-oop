#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c;

    // 找出最大值
    if (a > b) n = a;
    else n = b;

    if (n < c) n = c;

    cout << n << '\n';

    return 0;
}
