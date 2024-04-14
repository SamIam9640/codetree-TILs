#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b,sum_v=0;
    cin>>a>>b;


    for(int i=a;i<=b;i++){
        sum_v+=i;
    }
    cout<<sum_v;
    return 0;
}