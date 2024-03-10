#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1;
    string str2;
    cin>>str1>>str2;
    int cnt=0;
    

    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]==str2) cnt++;
    }
    cout<<cnt;
    return 0;
}