#include <bits/stdc++.h>
using namespace std;

int main() {
    int idx=-1;

    char a;
    cin>>a;

    char word[6]={'L','E','B','R','O','S'};

    for(int i=0;i<6;i++){
        if(word[i]==a) {idx=i;}
    }

    if(idx==-1) cout<<"None";
    else cout<<idx;
    return 0;
}