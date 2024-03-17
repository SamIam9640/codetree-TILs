#include <bits/stdc++.h>
#define MAXN 10
using namespace std;


class Person{
    public:
    string name;
    int height;
    int weight;

    Person(string name,int height,int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Person() {}
};

bool cmp(Person a,Person b){
    return a.height<b.height;
}

Person people[MAXN];
int main() {
    int n;
    cin>>n;
 
 for(int i=0;i<n;i++){
    string name;
    int height,weight;
    cin>>name>>height>>weight;
    people[i]=Person(name,height,weight);
 }

 sort(people,people+n,cmp);

    for(int i=0;i<n;i++)
    cout<<people[i].name<<" "<<people[i].height<<" "<<people[i].weight<<"\n";

    return 0;
}