#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;  // y != 0

    cout << x << "+" << y << "=" << x + y << '\n';
    cout << x << "*" << y << "=" << x * y << '\n';
    cout << x << "-" << y << "=" << x - y << '\n';

    int q = x / y;
    int r = x % y;

    // 修正成非負餘數
    if (r < 0) {
        if (y > 0) {
            q--;
            r += y;
        } else {
            q++;
            r -= y;
        }
    }

    cout << x << "/" << y << "=" << q << "..." << r << '\n';

    return 0;
}
