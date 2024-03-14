#include <bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n==1)
    return 1;

    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    cout<<Sum(n);
    return 0;
}