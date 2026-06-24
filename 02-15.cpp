#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m;
    cin >> m;

    long long cost10;  // 費用 * 10

    if (m <= 800) {
        cost10 = m * 9;
    } 
    else if (m < 1500) {
        // 四捨五入到小數第 1 位
        cost10 = (m * 81 + 5) / 10;
    } 
    else {
        // 四捨五入到小數第 1 位
        cost10 = (m * 711 + 50) / 100;
    }

    cout << cost10 / 10 << "." << cost10 % 10 << '\n';

    return 0;
}
