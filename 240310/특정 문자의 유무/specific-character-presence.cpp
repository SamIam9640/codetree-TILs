#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin>>s;
    int length=s.length();
    bool exists =false;

    for(int i=0;i<length-1;i++){
        if(s[i]=='e'&&s[i+1]=='e'){
            exists=true;
        }
    }
    if(exists==true) cout<<"Yes ";
    else cout<<"No ";

    for(int i=0;i<length-1;i++){
        if(s[i]=='a'&&s[i+1]=='b'){
            exists=true;
        }
    }
    if(exists==true) cout<<"Yes";
    else cout<<"No";
    return 0;
}