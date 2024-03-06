#include <iostream>

int calculateStepsToReachOne(int n) {
    int steps = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            // n이 짝수인 경우
            n /= 2;
        } else {
            // n이 홀수인 경우
            n = 3 * n + 1;
        }
        steps++;
    }

    return steps;
}

int main() {
    int m;
    std::cin >> m;

    for (int i = 0; i < m; ++i) {
        int n;
        std::cin >> n;

        int result = calculateStepsToReachOne(n);
        std::cout<< result << "\n";
    }

    return 0;
}