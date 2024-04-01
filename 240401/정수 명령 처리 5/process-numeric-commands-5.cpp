//변수 선언 미치 입력
//동적 배열 선언

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        string command;
        cin>>command;

        if(command=="push_back"){
            int num;
            cin>>num;
            v.push_back(num);
        }
        else if(command=="get"){
            int idx;
            cin>>idx;
            cout<<v[idx-1]<<"\n";
        }
        else if(command=="pop_back"){
            v.pop_back();
        }
        else
        {
            cout<<v.size()<<"\n";
        }
    }
    return 0;
}