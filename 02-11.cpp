#include <bits/stdc++.h>
using namespace std;

int main() {
    double C;
    cin >> C;

    // 攝氏轉華氏
    double F = C * 9.0 / 5.0 + 32.0;

    cout << fixed << setprecision(1) << F << '\n';

    return 0;
}
