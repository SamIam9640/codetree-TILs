#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum_val=0;
    cin>>n;

    for(int i=1;i<=100;i++){
        sum_val+=i;
        if(sum_val>=n){
            cout<<i;
             break;
        }
    }
    return 0;
}