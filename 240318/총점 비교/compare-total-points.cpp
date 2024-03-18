#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int kor,eng, math;

    Student (int kor,int eng,int math){
        this->kor=kor;
        this->eng=eng;
        this->math=math;
    }
};

bool cmp(Student a,Student b){
    return a.kor+a.eng+a.math<b.kor+b.eng+b.math;
}

int main(){
    Student students[5]={
        Student(90, 80, 90), // 첫 번째 학생
        Student(20, 80, 80), // 두 번째 학생
        Student(90, 30, 60), // 세 번째 학생
        Student(60, 10, 50), // 네 번째 학생
        Student(80, 20, 10)
    };

    sort(students,students+5,cmp);

    for(int i=0;i<5;i++){
        cout<<students[i].kor<<" "<<students[i].eng<<" "<<students[i].math<<"\n";

        return 0;
    }
}