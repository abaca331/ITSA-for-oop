#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int sum = 0;

    // 找出 1 到 N 中，是 6 的倍數但不是 12 的倍數的數字
    for (int i = 1; i <= N; i++) {
        if (i % 6 == 0 && i % 12 != 0) {
            sum += i;
        }
    }

    cout << sum << '\n';

    return 0;
}