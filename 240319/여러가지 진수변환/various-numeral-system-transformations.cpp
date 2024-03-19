#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,b;
    cin>>n>>b;

    int digits[20]={};
    int cnt=0;

    while(true){
        if(n<4){
        digits[cnt++]=n;
        break;
        }
        digits[cnt++]=n%b;
        n/=b;
    }
    for(int i=cnt-1;i>=0;i--)
    cout<<digits[i];

    
    


}