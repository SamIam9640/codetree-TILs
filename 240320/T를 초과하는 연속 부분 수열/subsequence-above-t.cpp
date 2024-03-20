#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    int maxLength = 0;
    int currentLength = 0;
    for (int i = 0; i < n; ++i) {
        if (sequence[i] > t) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }

    // 마지막 부분 수열의 길이를 확인하여 최대 길이 갱신
    maxLength = max(maxLength, currentLength);

    cout << maxLength << endl;

    return 0;
}