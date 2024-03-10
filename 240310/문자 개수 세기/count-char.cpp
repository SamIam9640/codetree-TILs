#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    char a;
    cin>>a;

    int cnt=0;

    int len=str.length();

    for(int i=0;i<len;i++){
        if(str[i]==a) cnt++;
    }
    cout<<cnt;
}