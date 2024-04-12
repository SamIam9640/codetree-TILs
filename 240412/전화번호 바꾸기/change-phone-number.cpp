#include <iostream>
#include <string>

using namespace std;

int main() {
    string phoneNumber;
    
    // 전화번호 입력 받기
    cout << "전화번호를 입력하세요 (010-xxxx-yyyy 형식): ";
    cin >> phoneNumber;
    
    // '-'를 기준으로 문자열을 앞뒤로 나누기
    size_t hyphenPos = phoneNumber.find('-');
    string firstPart = phoneNumber.substr(0, hyphenPos);
    string middlePart = phoneNumber.substr(hyphenPos + 1, 4); // "xxxx" 부분
    string lastPart = phoneNumber.substr(hyphenPos + 6); // "yyyy" 부분
    
    // 결과 출력
    cout << "바뀐 전화번호: 010-" << lastPart << "-" << middlePart << endl;
    
    return 0;
}