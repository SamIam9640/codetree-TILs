#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;

 c=a+b;
     int cnt=0;

    string s;
    s=to_string(c);

    for(int i=0;i<s.length();i++){
        if(s[i]=='1') cnt++;
    }
    cout<<cnt;
    return 0;

}