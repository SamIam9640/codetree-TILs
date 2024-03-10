#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    char n;
    cin>>n;

    int start_idx=-1;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==n){
            start_idx=i;
            break;
        }
    }

    if(start_idx==-1){
        cout<<"No";
    }
    else
    cout<<start_idx;
    return 0;
}