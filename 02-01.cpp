#include <bits/stdc++.h>
using namespace std;

int main() {
    int base, height;
    cin >> base >> height;

    // 三角形面積 = 底 * 高 / 2
    double area = base * height / 2.0;

    cout << fixed << setprecision(1);
    cout << "Triangle area:" << area << '\n';

    return 0;
}
