#include <iostream>

int main() {
    int n;
    std::cin >> n;

    // 직각삼각형의 왼쪽 부분 출력
    for (int i = 0; i < n; ++i) {
        // 별표 출력
        for (int j = 0; j < n - i; ++j) {
            std::cout << "*";
        }
        // 공백 출력
        for (int k = 0; k < 2 * i; ++k) {
            std::cout << " ";
        }
        // 직각삼각형의 오른쪽 부분 출력
        for (int j = 0; j < n - i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}