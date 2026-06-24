#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, base, height;
    cin >> T >> base >> height;

    // 梯形面積 = (上底 + 下底) * 高 / 2
    double area = (T + base) * height / 2.0;

    cout << fixed << setprecision(1);
    cout << "Trapezoid area:" << area << '\n';

    return 0;
}
