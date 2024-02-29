#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,sum_val=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a%2!=0&&a%3==0){
            sum_val+=a;
        }
    }
    cout<<sum_val;
    return 0;
}