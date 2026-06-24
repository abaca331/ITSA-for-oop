#include <bits/stdc++.h>
using namespace std;

int main() {
    int type;
    cin >> type;

    int h = 5;             // 高度
    int base = 2 * h - 1;  // 底邊寬度

    if (type == 1) {  // 空心三角形
        for (int i = 1; i <= h; i++) {
            int spaces = h - i;
            cout << string(spaces, ' ');

            if (i == 1) {
                cout << '*';
            } else if (i == h) {
                cout << string(base, '*');
            } else {
                int inner = 2 * i - 3;
                cout << '*' << string(inner, ' ') << '*';
            }

            cout << '\n';
        }
    }
    else if (type == 2) {  // 實心三角形
        for (int i = 1; i <= h; i++) {
            int spaces = h - i;
            int stars = 2 * i - 1;

            cout << string(spaces, ' ');
            cout << string(stars, '*') << '\n';
        }
    }
    else if (type == 3) {  // 實心倒三角形
        for (int i = h; i >= 1; i--) {
            int spaces = h - i;
            int stars = 2 * i - 1;

            cout << string(spaces, ' ');
            cout << string(stars, '*') << '\n';
        }
    }

    return 0;
}
