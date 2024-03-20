#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> movements_a, movements_b;

    // A의 움직임 정보 입력
    for (int i = 0; i < n; ++i) {
        int v, t;
        cin >> v >> t;
        movements_a.push_back({v, t});
    }

    // B의 움직임 정보 입력
    for (int i = 0; i < m; ++i) {
        int v, t;
        cin >> v >> t;
        movements_b.push_back({v, t});
    }

    int leader_a = 1, leader_b = 1; // 초기에 A와 B가 선두로 시작함
    int changes = 0;

    // 매 시간대마다 A와 B의 상대적인 위치 비교
    for (int time = 1; time <= 1000; ++time) {
        // A와 B의 위치 계산
        int pos_a = 0, pos_b = 0;
        for (auto movement : movements_a) {
            pos_a += movement.first * min(time, movement.second); // 최대 t초 이동
        }
        for (auto movement : movements_b) {
            pos_b += movement.first * min(time, movement.second); // 최대 t초 이동
        }

        // 선두 확인 및 변경
        if (pos_a > pos_b && leader_a != 1) {
            ++changes;
            leader_a = 1;
            leader_b = 0;
        } else if (pos_b > pos_a && leader_b != 1) {
            ++changes;
            leader_a = 0;
            leader_b = 1;
        }
    }

    cout << changes << endl;

    return 0;
}