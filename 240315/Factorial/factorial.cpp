#include <bits/stdc++.h>
using namespace std;

int Fac(int n){
    if(n==0) return 1;
    if(n==1) return 1;

    return Fac(n-1)*n;
}


int main(){
    int n;
    cin>>n;

    cout<<Fac(n);
    return 0;
}