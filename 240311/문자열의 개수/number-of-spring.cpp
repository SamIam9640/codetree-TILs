#include <bits/stdc++.h>
using namespace std;

int main() {
    string str[201];
    int cnt=0;

    while(true){
        cin>>str[cnt];

        if(str[cnt]=="0")
        break;

        cnt++;
    }

    cout<<cnt<<"\n";

    for(int i=0;i<cnt;i+=2){
        cout<<str[i]<<"\n";
    }
    return 0;
}