#include <bits/stdc++.h>
using namespace std;

class Bomb{
    string code;
    char color;
    int num;

    Bomb (string code, char color, int num){
        this->code=code;
        this->color=color;
        this->num=num;
    }
};

Bomb bob=Bomb(code,color,num);

int main(){
    string code;
    char color;
    int num;
    cin>>code>>color>>num;

    cout<<"code : "<<bob.code<<"\n";
    cout<<"color : "<<bob.color<<"\n";
    cout<<"second : "<<bob.second<<"\n";
}