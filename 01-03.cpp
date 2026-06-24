#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    // 由個位輸出到千位
    cout << n % 10 << ",";
    cout << (n / 10) % 10 << ",";
    cout << (n / 100) % 10 << ",";
    cout << n / 1000 << '\n';

    return 0;
}
