#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    cout << n / 1000 << '\n'; //千位
    cout << (n / 100) % 10 << '\n';
    cout << (n / 10) % 10 << '\n';
    cout << n % 10 << '\n';

    return 0;
}
