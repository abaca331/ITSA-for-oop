#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double w;
        cin >> w;

        double area = w * w;

        // 四捨五入到小數點後 1 位
        area = floor(area * 10.0 + 0.5) / 10.0;

        cout << fixed << setprecision(1) << area << '\n';
    }

    return 0;
}
