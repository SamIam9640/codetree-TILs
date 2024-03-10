#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    char n;
    cin>>n;
    int len=str.length();
    int cnt=0;

    for(int i=0;i<len;i++){
    if(str[i]==n) cnt++;
    }

    cout<<cnt;
    return 0;
}