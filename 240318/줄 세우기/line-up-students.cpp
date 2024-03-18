#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;

class Student{
    public:
    int height,weight,num;
    Student(int height, int weight, int num){
        this->height=height;
        this->weight=weight;
        this->num=num;
    }
    Student () {}
};

bool cmp(Student a,Student b){
    if(a.height!=b.height)
    return a.height>b.height;
    if(a.weight!=b.weight)
    return a.weight>b.weight;
    return a.num<b.num;
}

Student students[MAXN];

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int height,weight,num;
        cin>>height>>weight>>num;
        students[i]=Student(height,weight,i+1);
    }

    sort(students,students+n,cmp);

    for(int i=0;i<n;i++){
        cout<<students[i].height<<" "<<students[i].weight<<" "
        <<students[i].num<<"\n";
    }
    return 0;
}