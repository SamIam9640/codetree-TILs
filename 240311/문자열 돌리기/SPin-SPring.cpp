#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int len=s.length();
    cout<<s<<"\n";
    for(int i=0;i<len;i++){
        s=s.substr(len-1,1)+s.substr(0,len-1);
        cout<<s<<"\n";
    }
    return 0;
}