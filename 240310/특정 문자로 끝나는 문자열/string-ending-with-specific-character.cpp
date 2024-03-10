#include <bits/stdc++.h>
using namespace std;

int main() {
    string str[10];
    char c;
    int cnt=0;
    for(int i=0;i<10;i++){
        cin>>str[i];
    }
    cin>>c;

    for(int i=0;i<10;i++){
        int len=str[i].length();
        if(str[i][len-1]==c){
            cout<<str[i]<<"\n";
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"None";
    }
    return 0;
}