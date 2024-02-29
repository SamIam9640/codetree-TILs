#include <iostream>

int main() {
    int n;
    
    std::cin >> n;

    int count = 0;
    int divisor = 1;

    while (n > 1) {
        n /= divisor;
        divisor++;
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}