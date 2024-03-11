#include <iostream>
#include <string>
using namespace std;

int main() {
    // 문자열을 구현합니다.
	string a;
	string b;
	string str1;
	string str2;
	
	// 문자열을 입력받습니다.
	cin >> a >> b;
	
	// 문자열의 길이를 구합니다.
	int len_a = a.length();
	int len_b = b.length();
	
	int idx1 = 0;
	int idx2 = 0;
	
	// a의 정수로 변환 가능한 최대 인덱스를 찾습니다.
	for(int i = 0; i < len_a; i++)
		if(a[i] <= '9' && a[i] >= '0')
			idx1++;
		else break;
	
	// b의 정수로 변환 가능한 최대 인덱스를 찾습니다.
	for(int i = 0; i < len_b; i++)
		if(b[i] <= '9' && b[i] >= '0')
			idx2++;
		else break;
	
	// a의 정수로 변환 가능한 부분을 다른 문자열로 옮깁니다.
	str1 = a.substr(0, idx1);
	
	// b의 정수로 변환 가능한 부분을 다른 문자열로 옮깁니다.
	str2 = b.substr(0, idx2);
	
	// 합쳐진 문자열을 숫자로 바꿉니다.
	int str1_int = stoi(str1);
	int str2_int = stoi(str2);
	
	// 두 숫자의 합을 출력합니다.
	printf("%d", str1_int + str2_int);
	
    return 0;
}