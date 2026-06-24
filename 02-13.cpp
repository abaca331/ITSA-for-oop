#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    // 計算 BMI
    double height_m = h / 100.0;
    double bmi = w / (height_m * height_m);

    cout << fixed << setprecision(2) << bmi << '\n';

    return 0;
}
