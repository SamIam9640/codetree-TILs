#include <bits/stdc++.h>
using namespace std;

class User{
public:
string id;
int lev;

User(string id="", int lev=0){
this->id=id;
this->lev=lev;
}
};
int main(){
User n1=User();

n1.id="codetree";
n1.lev=10;

string id2;
int lev2;
cin>>id2>>lev2;

User n2=User();

n2.id=id2;
n2.lev=lev2;

cout<<"user "<<n1.id<<" lv "<<n1.lev<<"\n";
cout<<"user "<<n2.id<<" lv "<<n2.lev<<"\n";
return 0;
}