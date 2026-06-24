#include <bits/stdc++.h>
using namespace std;

int isPrime(int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;

    // 檢查奇數因數
    for (int d = 3; d * d <= x; d += 2) {
        if (x % d == 0) return 0;
    }

    return 1;
}

int main() {
    int N;
    cin >> N;

    // 從 N-1 開始往下找質數
    for (int i = N - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';

    return 0;
}
