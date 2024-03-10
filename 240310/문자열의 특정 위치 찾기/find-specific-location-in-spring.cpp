#include <bits/stdc++.h>
using namespace std;

int main() {
    char n;
    cin>>n;

    string str;
    cin>>str;
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