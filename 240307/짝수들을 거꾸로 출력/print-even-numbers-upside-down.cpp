#include <iostream>
#include <vector>

int main() {
    int n;

    // 원소의 개수 입력
    std::cin >> n;

    // 원소를 저장할 벡터 생성
    std::vector<int> elements(n);

    // 원소 입력
    for (int i = 0; i < n; ++i) {
        std::cin >> elements[i];
    }

    // 짝수를 반대 순서로 출력
    for (int i = n - 1; i >= 0; --i) {
        if (elements[i] % 2 == 0) {
            std::cout << elements[i] << " ";
        }
    }

    return 0;
}