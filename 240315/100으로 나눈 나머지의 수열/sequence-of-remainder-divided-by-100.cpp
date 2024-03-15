#include <bits/stdc++.h>
using namespace std;

int GetNum(int a){
    if (a==1) return 2;
    if (a==2) return 4;

    return (GetNum(a-1)*GetNum(a-2))%100;
}

int main(){
    int n;
    cin>>n;

    cout<<GetNum(n);
    return 0;
}