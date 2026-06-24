#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 判斷正數、0、負數
    if (n > 0) {
        cout << "正數\n";
    } 
    else if (n == 0) {
        cout << "0\n";
    } 
    else {
        cout << "負數\n";
    }

    return 0;
}