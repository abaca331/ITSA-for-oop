#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool isPrime = true;

    // 小於等於 1 不是質數
    if (N <= 1) {
        isPrime = false;
    } else {
        // 只需要檢查到根號 N
        for (long long i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}