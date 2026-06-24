#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m;
    cin >> m;

    // 無條件進位計算
    long long t = (1000LL * m + 238 - 1) / 238;

    cout << t << '\n';

    return 0;
}
