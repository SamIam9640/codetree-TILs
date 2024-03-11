#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i=0;i<10;i++){
        string str;
        cin>>str;

        if(str=="END")
        break;

        int len=str.length();

        for(int i=len-1;i>=0;i--){
            cout<<str[i];
            
        }
        cout<<"\n";
    }
    return 0;
}