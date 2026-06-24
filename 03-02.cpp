#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    // 先轉成小寫，方便判斷大小寫字母
    ch = tolower(ch);

    // 判斷是否為母音
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "母音\n";
    } else {
        cout << "子音\n";
    }

    return 0;
}