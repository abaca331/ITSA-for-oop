#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // 輸出 x、x 的平方、x 的立方
        cout << x << " " << x * x << " " << x * x * x << '\n';
    }

    return 0;
}
