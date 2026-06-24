#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;

    cin >> m >> n;

    // 印出 n 列、每列 m 個星號
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
