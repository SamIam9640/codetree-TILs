#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;

    s[1]='a';
    int len=s.length();
    s[len-2]='a';
    cout<<s;
    return 0;
}