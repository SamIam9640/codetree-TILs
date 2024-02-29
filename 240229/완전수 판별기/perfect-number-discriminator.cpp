#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum_val=0,n,i;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum_val+=i;
        }
 }
        if(sum_val==n){
            cout<<" P ";
        }
        else if(sum_val!=n){
            cout<<" N ";
        }
    return 0;

}