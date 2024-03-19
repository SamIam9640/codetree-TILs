#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string str;
    int digits[20]={};
    int cnt=0;

    cin>>a>>b>>str;

    int num=0;

    for(int i=0;i<(int)str.size();i++)
    num=num*2+(str[i]-'0');

    
    while(true){
        if(num<b){
            digits[cnt++]=num;
            break;
        }
        digits[cnt++]=num%b;
        num/=b;
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<digits[i];
    }

return 0;
    
}