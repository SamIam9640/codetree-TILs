#include <iostream>

int main() {
    int n;
    
    // 사용자로부터 자연수 n 입력 받기
    std::cout << "자연수 n을 입력하세요: ";
    std::cin >> n;

    // 규칙에 따라 출력
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            // 홀수 번째 줄: 1씩 증가
            for (int j = 1; j <= i; ++j) {
                std::cout << j << " ";
            }
        } else {
            // 짝수 번째 줄: 2씩 증가
            for (int j = 1; j <= i; ++j) {
                std::cout << 2 * j << " ";
            }
        }

        // 줄 바꿈
        std::cout << std::endl;
    }

    return 0;
}