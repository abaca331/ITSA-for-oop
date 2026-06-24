#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // 計算 10 元、5 元、1 元數量
    int nt10 = N / 10;
    N %= 10;

    int nt5 = N / 5;
    N %= 5;

    int nt1 = N;

    cout << "NT10=" << nt10 << '\n';
    cout << "NT5=" << nt5 << '\n';
    cout << "NT1=" << nt1 << '\n';

    return 0;
}
