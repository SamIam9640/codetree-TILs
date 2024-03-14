#include <bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n<10)
    return n*n;

int digit=(n%10);
    return Sum(n/10)+digit*digit;
}

int main(){
    int n;
    cin>>n;
    cout<<Sum(n);
    return 0;
}