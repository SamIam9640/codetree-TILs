#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int num1=0;
    int num2=0;
    int digits[20]={};
    int cnt=0;

    for(int i=0;i<(int)n.size();i++)
    num1=num1*2+(n[i]-'0');


    num2=num1*17;

    while(true){
        if(num2<2){
            digits[cnt++]=num2;
            break;
        }

        digits[cnt++]=num2%2;
        num2/=2;
    }

    for(int i=cnt-1;i>=0;i--)
    cout<<digits[i];

    return 0;

    
    
}