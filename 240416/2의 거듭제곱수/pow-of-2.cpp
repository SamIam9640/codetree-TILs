#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,cnt=0;
    cin>>n;
    while(1){
        if((n/2)<1) break;
        n/=2;
        cnt++;
        
    }
    cout<<cnt;
    return 0;
}