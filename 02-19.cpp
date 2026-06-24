#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    // 輾轉相除法
    while (N != 0) {
        int r = M % N;
        M = N;
        N = r;
    }

    cout << M << '\n';

    return 0;
}
