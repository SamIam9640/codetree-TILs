#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // 두 줄의 문자열 입력 받기
    std::string line1, line2;
    std::getline(std::cin, line1);
    std::getline(std::cin, line2);

    // 각 문자열에서 공백 제거
    line1.erase(std::remove_if(line1.begin(), line1.end(), ::isspace), line1.end());
    line2.erase(std::remove_if(line2.begin(), line2.end(), ::isspace), line2.end());

    // 결과 출력
    std::cout << "첫 번째 줄 (공백 제외): " << line1 << std::endl;
    std::cout << "두 번째 줄 (공백 제외): " << line2 << std::endl;

    return 0;
}