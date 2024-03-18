#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    int height;
    int weight;
    int number;

    Student(int h, int w, int num) : height(h), weight(w), number(num) {}

    // 비교 연산자 오버로딩
    bool operator<(const Student& other) const {
        if (height != other.height) // 키가 다르면
            return height < other.height; // 키가 작은 학생이 먼저 오도록 정렬
        else // 키가 같다면
            return weight > other.weight; // 몸무게가 더 큰 학생이 먼저 오도록 정렬
    }
};

int main() {
    int N;
    cin >> N;

    vector<Student> students;

    // 학생 정보 입력
    for (int i = 0; i < N; ++i) {
        int h, w;
        cin >> h >> w;
        students.emplace_back(h, w, i + 1); // 학생 정보를 벡터에 추가
    }

    // 조건에 맞게 학생들을 정렬
    sort(students.begin(), students.end());

    // 정렬된 학생들의 정보 출력
    for (const auto& student : students) {
        cout << student.height << " " << student.weight << " " << student.number << endl;
    }

    return 0;
}