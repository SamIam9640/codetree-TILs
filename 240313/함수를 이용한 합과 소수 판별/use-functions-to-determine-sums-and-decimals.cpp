#include <bits/stdc++.h>
using namespace std;

bool Both(int n){
    if(n==1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }

    if(((n%10)+(n/10))%2!=0) return false;
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;

    for(int i=a;i<=b;i++){
if(Both(i)) cnt++;
    }
    cout<<cnt;
    return 0;
}