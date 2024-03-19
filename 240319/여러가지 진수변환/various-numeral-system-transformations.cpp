#include <bits/stdc++.h>
#define MAXDIGIT 20
using namespace std;



int n,b;
int digits[MAXDIGIT];
int cnt;

int main(){
    cin>>n>>b;

    while(true){
        if(n<b)
        digits[cnt++]=n;
        break;
    
    digits[cnt++]=n%b;
    n/=b;
}
    for(int i=cnt-1;i>=0;i--){
        cout<<digits[i];
    }
        return 0;
}