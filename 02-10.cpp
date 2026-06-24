#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 轉成公里
    double K = n * 1.6;

    cout << fixed << setprecision(1);
    cout << "km=" << K;

    return 0;
}
