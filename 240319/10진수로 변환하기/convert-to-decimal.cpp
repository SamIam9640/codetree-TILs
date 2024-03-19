#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int decimal = 0;
    int power = 0;

    // 이진수를 뒤에서부터 읽어가며 십진수로 변환
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    cout<< decimal << endl;

    return 0;
}