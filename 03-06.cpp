#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // x 在 50 到 70 之間，y 就等於 x
        if (x >= 50 && x <= 70) {
            cout << x << '\n';
        }
        // 否則 y 等於 100
        else {
            cout << 100 << '\n';
        }
    }

    return 0;
}
