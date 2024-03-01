#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    cin >> n;

    while (true) {
        if (n % 2 == 0) {
            n = 3 * n + 1;
        } else {
            n = 2 * n + 2;
        }
        cnt++;

        if (n >= 1000) {
            cout << cnt;
            break;
        }
    }

    return 0;
}