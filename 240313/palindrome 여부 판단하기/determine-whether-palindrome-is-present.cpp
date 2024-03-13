#include <bits/stdc++.h>
using namespace std;

string str;

bool Palindrome(string s){
    for(int i=0;i<(int)s.size();i++){
        if(s[i]!=s[(int)s.size()-i-1])
        return false;

        return true;
    }
}

int main(){
    cin>>str;

    if(Palindrome(str))
    cout<<"Yes";
    else
    cout<<"No";

    return 0;
}