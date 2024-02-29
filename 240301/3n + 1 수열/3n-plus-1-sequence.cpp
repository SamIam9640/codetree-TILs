#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,cnt=0;
    cin>>n;

    while(true){
        
        if(n==1) {
            
            break;
        }
        if(n%2!=0) 
            n=3*n+1;
            else
            n/=2;

           cnt++;
            
        
    }
    cout<<cnt;
    return 0;
}