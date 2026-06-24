#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, sm, eh, em;
    cin >> s >> sm;
    cin >> eh >> em;

    int start = s * 60 + sm;
    int end = eh * 60 + em;
    int diff = end - start;

    int unit = diff / 30;  // 每 30 分鐘為一單位
    int fee = 0;

    if (unit <= 4) {
        fee = unit * 30;
    } 
    else if (unit <= 8) {
        fee = 4 * 30 + (unit - 4) * 40;
    } 
    else {
        fee = 4 * 30 + 4 * 40 + (unit - 8) * 60;
    }

    cout << fee << '\n';

    return 0;
}
