#include <bits/stdc++.h>
using namespace std;

bool IsMoreTwoalp(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[0])
        return true;
    }
    return false;
}

int main(){
    string str;
    cin>>str;

    if(IsMoreTwoalp(str))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}