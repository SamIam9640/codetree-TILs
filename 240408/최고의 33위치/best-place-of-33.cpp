#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> grid(N, vector<int>(N, 0));

    // 격자 정보 입력
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    int maxCoins = 0;

    // 3*3 격자 탐색
    for (int i = 0; i <= N - 3; ++i) {
        for (int j = 0; j <= N - 3; ++j) {
            int coins = 0;
            // 3*3 격자 내의 동전 개수 계산
            for (int row = i; row < i + 3; ++row) {
                for (int col = j; col < j + 3; ++col) {
                    coins += grid[row][col];
                }
            }
            // 최대 동전 개수 갱신
            maxCoins = max(maxCoins, coins);
        }
    }

    cout << maxCoins << endl;

    return 0;
}