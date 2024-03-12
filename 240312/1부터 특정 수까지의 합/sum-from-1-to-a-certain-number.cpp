#include <bits/stdc++.h>
using namespace std;

int Dev(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum/10;
}

int main(){
    int a;
    cin>>a;

    cout<<Dev(a);
    return 0;
}