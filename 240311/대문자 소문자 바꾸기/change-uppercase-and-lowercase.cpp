#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (isupper(str[i])) {
            cout << (char)tolower(str[i]);
        } else if (islower(str[i])) {
            cout << (char)toupper(str[i]);
        } else {
            cout << str[i];  // 처리할 필요 없는 문자는 그대로 출력
        }
    }

    return 0;
}