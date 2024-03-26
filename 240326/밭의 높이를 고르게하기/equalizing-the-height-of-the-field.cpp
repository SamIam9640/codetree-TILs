#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main() {
    int N, H, T;
    cin >> N >> T >> H;

    vector<int> field(N);
    for (int i = 0; i < N; ++i) {
        cin >> field[i];
    }

    // dp[i][j]: i번째 밭까지 고르게 만들고 j개 이상의 연속된 밭이 높이 H 이상이 되도록 만들기 위한 최소 비용
    vector<vector<int>> dp(N + 1, vector<int>(T + 1, INF));
    dp[0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= T; ++j) {
            int cost = abs(field[i] - H); // 높이를 H로 만들 때 드는 비용
            for (int k = 0; k <= j; ++k) {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - k] + cost * k);
            }
        }
    }

    int min_cost = INF;
    for (int j = 0; j <= T; ++j) {
        min_cost = min(min_cost, dp[N][j]);
    }

    cout << min_cost << endl;

    return 0;
}