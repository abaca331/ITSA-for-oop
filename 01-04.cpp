#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    if (!(cin >> s)) return 0;

    // 英文轉中文
    if (s == "dog") cout << "狗\n";
    else if (s == "cat") cout << "貓\n";
    else if (s == "duck") cout << "鴨\n";
    else if (s == "cow") cout << "牛\n";
    else if (s == "fox") cout << "狐\n";

    // 中文轉英文
    else if (s == "狗") cout << "dog\n";
    else if (s == "貓") cout << "cat\n";
    else if (s == "鴨") cout << "duck\n";
    else if (s == "牛") cout << "cow\n";
    else if (s == "狐") cout << "fox\n";

    return 0;
}
