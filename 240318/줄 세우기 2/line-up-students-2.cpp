#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;

class Student{
    public:
    int height,weight,num;
    Student(int height,int weight,int num){
        this->height=height;
        this->weight=weight;
        this->num=num;
    }
    Student (){}
};

bool cmp(Student a,Student b){
    if(a.height!=b.height)
    return a.height<b.height;
    if(a.weight!=a.weight)
    return a.weight<b.weight;
}

Student students[MAXN];

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int height,weight,num;
        cin>>height>>weight;
        students[i]=Student(height,weight,i+1);
    }

    sort(students,students+n,cmp);

    for(int i=0;i<n;i++){
        cout<<students[i].height<<" ";
        cout<<students[i].weight<<" ";
        cout<<students[i].num<<"\n"; 
        }
        return 0;

}