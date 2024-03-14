#include <bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return Sum(n-2)+n;
}

int main(){
    int n;
    cin>>n;

    cout<<Sum(n);
    return 0;
}