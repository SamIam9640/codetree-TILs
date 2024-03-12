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
    int num;
    cin>>num;

    cout<<Dev(num);
    return 0;
}