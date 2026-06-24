#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        // 輸出 (x + y) 的平方
        cout << (x + y) * (x + y) << '\n';
    }

    return 0;
}
