#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    string a_str;
    int cnt=0;

    a_str=to_string(a);

    for(int i=0;i<a_str.length();i++){
        cnt+=a_str[i]-'0';
    }

    cout<<cnt;
    return 0;
}