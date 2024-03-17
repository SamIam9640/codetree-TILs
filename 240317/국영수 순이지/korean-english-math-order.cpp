#include <bits/stdc++.h>
#define MAXN 10
using namespace std;

class Student{
    public:
    string name;
    int kor,eng,math;

    Student(string name,int kor,int eng,int math){
        this->name=name;
        this->kor=kor;
        this->eng=eng;
        this->math=math;
    }
    Student(){};
};

bool cmp(Student a,Student b){
    if(a.kor !=b.kor)
    return a.kor>b.kor;
    if(a.eng !=b.eng)
    return a.eng>b.eng;
    return a.math>b.math;
}
Student students[MAXN];
int main(){
    int n;
    cin>>n;

    string name;
    int kor,eng,math;
    for(int i=0;i<n;i++){
        cin>>name>>kor>>eng>>math;
        students[i]=Student(name,kor,eng,math);
    }

    sort(students,students+n,cmp);
    for(int i=0;i<n;i++){
        cout<<students[i].name<<" ";
        cout<<students[i].kor<<" ";
        cout<<students[i].eng<<" ";
        cout<<students[i].math<<"\n";
    }
    return 0;
}