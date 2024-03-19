#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// a진수를 10진수로 변환하는 함수
int toDecimal(int n, int base) {
    int result = 0, power = 1;
    while (n > 0) {
        result += (n % 10) * power;
        power *= base;
        n /= 10;
    }
    return result;
}

// 10진수를 b진수로 변환하는 함수
vector<int> toBase(int n, int base) {
    vector<int> result;
    while (n > 0) {
        result.push_back(n % base);
        n /= base;
    }
    reverse(result.begin(), result.end()); // 역순으로 변환
    return result;
}

int main() {
    int a, b, n;
   
    cin >> a >> b >> n;

    // a진수를 10진수로 변환
    int decimal = toDecimal(n, a);

    // 10진수를 b진수로 변환
    vector<int> result = toBase(decimal, b);

    // 결과 출력
    
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}