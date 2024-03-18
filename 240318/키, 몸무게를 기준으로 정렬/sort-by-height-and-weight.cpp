#include <bits/stdc++.h>
#define MAXN 10
using namespace std;

class Student{
    public:
    string name;
    int height,weight;
    Student(string name,int height,int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Student () {}
};

bool cmp(Student a,Student b){
    
    if(a.height!=b.height)
    return a.height<b.height;

    return a.weight>b.weight;
}

Student students[MAXN];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int height,weight;
        cin>>name>>height>>weight;
        students[i]=Student(name,height,weight);
    }
sort(students,students+n,cmp);

for(int i=0;i<n;i++){
    cout<<students[i].name<<" ";
    cout<<students[i].height<<" ";
    cout<<students[i].weight<<"\n";
}
return 0;

}