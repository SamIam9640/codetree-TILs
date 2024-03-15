#include <bits/stdc++.h>
using namespace std;

int GetN(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return GetN(n/3)+GetN(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<GetN(n);
    return 0;
}