#include <bits/stdc++.h>
using namespace std;

int main() {
    int P;
    cin >> P;

    int total;

    // 100 件以上打 7 折
    if (P >= 100) {
        total = P * 70;
    }
    // 30 到 99 件打 8 折
    else if (P >= 30) {
        total = P * 80;
    }
    // 10 到 29 件打 9 折
    else if (P >= 10) {
        total = P * 90;
    }
    // 不滿 10 件沒有折扣
    else {
        total = P * 100;
    }

    cout << total << '\n';

    return 0;
}