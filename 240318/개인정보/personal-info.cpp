#include <bits/stdc++.h>
#define MAXN 5

using namespace std;

class Person{
    public :
    string name;
    int height;
    double weight;
    Person(string name,int height,double weight){   
        this->name=name;
        this->height=height;
        this->weight=weight; 
    }
    Person (){}
};

bool cmp1(Person a,Person b){
    return a.height>b.height;
}
bool cmp2(Person a,Person b){
    return a.name<b.name;
}

Person people[MAXN];

int main(){
    for(int i=0;i<MAXN;i++){
        string name;
        int height;
        double weight;
cin>>name>>height>>weight;
people[i]=Person(name,height,weight);
    }

    cout<<fixed;
    cout.precision(1);


sort(people,people+MAXN,cmp2);
cout<<"name"<<"\n";
for(int i=0;i<MAXN;i++){
     cout<<people[i].name<<" ";
    cout<<people[i].height<< " ";
    cout<<people[i].weight<<"\n";
}
cout<<"\n";

sort(people,people+5,cmp1);

cout<<"height"<<"\n";

for(int i=0;i<MAXN;i++){
    cout<<people[i].name<<" ";
    cout<<people[i].height<< " ";
    cout<<people[i].weight<<"\n";
}
return 0;
}