#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    // 換算天、時、分、秒
    long long days = N / 86400;
    N %= 86400;

    long long hours = N / 3600;
    N %= 3600;

    long long minutes = N / 60;
    long long seconds = N % 60;

    cout << days << " days\n";
    cout << hours << " hours\n";
    cout << minutes << " minutes\n";
    cout << seconds << " seconds\n";

    return 0;
}
