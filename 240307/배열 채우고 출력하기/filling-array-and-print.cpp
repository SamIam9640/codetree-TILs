#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[10];

    for(char i=0;i<10;i++){
        cin>>a[i];
    }
    for(char i=9;i>=0;i--){
        cout<<(char) a[i];
    }
    return 0;
}