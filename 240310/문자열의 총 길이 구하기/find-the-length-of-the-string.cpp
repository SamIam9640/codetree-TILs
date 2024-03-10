#include <bits/stdc++.h>
using namespace std;

int main() {
    string str[10];
    int len_all=0;

    for(int i=0;i<10;i++){
        cin>>str[i];
    }
    for(int i=0;i<10;i++){
        int len=str[i].length();
        len_all+=len;
    }
    cout<<len_all;
    return 0;
}