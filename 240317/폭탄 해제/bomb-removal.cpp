#include <bits/stdc++.h>
using namespace std;

class Bomb{
    public:

    string code;
    char color;
    int num;

    Bomb (string code, char color, int num){
        this->code=code;
        this->color=color;
        this->num=num;
    }
};

int main(){
    string code;
    char color;
    int num;
    cin>>code>>color>>num;


Bomb bob=Bomb(code,color,num);

    cout<<"code : "<<bob.code<<"\n";
    cout<<"color : "<<bob.color<<"\n";
    cout<<"second : "<<bob.num<<"\n";

return 0;
}