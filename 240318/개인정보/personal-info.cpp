#include <bits/stdc++.h>
#define MAXN 5

using namespace std;

class Person{
    public :
    string name;
    int height, weight;
    Person(string name,int height,int weight){    
    }
    Person (){}
};

bool cmp(Person a,Person b){
    return a.height>b.height;
}

Person people[MAXN];

int main(){
    for(int i=0;i<5;i++){
        string name;
        int height,weight;
cin>>name>>height>>weight;
people[i]=Person(name,height,weight);
    }
sort(people,people+5,cmp);

for(int i=0;i<5;i++){
    cout<<people[i].name<<" "<<people[i].height<< " "
    <<people[i].weight<<"\n";
}
return 0;
}