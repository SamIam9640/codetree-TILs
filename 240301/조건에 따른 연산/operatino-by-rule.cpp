#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    int cnt=0;

    while(true){
        if(n>=1000){
             cout<<cnt;
            break;
        }
        if(n%2==0){
            n=3*n+1;
        }
        else if(n%2!=0){
            n=2*n+2;
            cnt++;
       
        }
        
    }
    return 0;
}