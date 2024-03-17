#include <bits/stdc++.h>
using namespace std;

class Spy{
    public:
    string s_code;
    char m_point;
    int time;

    Spy(string s_code,char m_point,int time){
    this->s_code=s_code;
    this->m_point=m_point;
    this->time=time;
    }
};

int main(){
    string s_code;
    char m_point;
    int time;
    cin>>s_code>>m_point>>time;

    Spy s=Spy(s_code,m_point,time);

    cout<<"secret code : "<<s_code<<"\n";
    cout<<"meeting point : "<<m_point<<"\n";
    cout<<"time : "<<time;
    return 0;
}