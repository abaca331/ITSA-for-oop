#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int k = 0; k < n; k++) {
        long long i;
        cin >> i;

        if (i > 31) {
            cout << "Value of more than 31\n";
        } else {
            // 計算 2 的 i 次方
            unsigned long long ans = 1ULL << i;
            cout << ans << '\n';
        }
    }

    return 0;
}
