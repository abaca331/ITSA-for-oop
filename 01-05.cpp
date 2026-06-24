#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;

    for (int i = 0; i < 5; i++) {
        int d = s[i] - '0';  // 字元轉數字

        // 印出 d 個星號
        for (int j = 0; j < d; j++) {
            cout << '*';
        }

        cout << '\n';
    }

    return 0;
}
