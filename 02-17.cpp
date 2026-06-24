#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, S;
    cin >> T >> S;

    int h1 = (T >= 60) ? 60 : T;
    int h2 = 0, h3 = 0;

    if (T > 60) {
        int rem = T - 60;
        h2 = (rem >= 60) ? 60 : rem;
    }

    if (T > 120) {
        h3 = T - 120;
    }

    // 用金額 * 100 計算，避免浮點誤差
    long long pay100 = 0;
    pay100 += (long long)h1 * S * 100;
    pay100 += (long long)h2 * S * 133;
    pay100 += (long long)h3 * S * 166;

    // 四捨五入到小數點後 1 位
    long long pay10 = (pay100 + 5) / 10;

    cout << pay10 / 10 << "." << pay10 % 10 << '\n';

    return 0;
}
