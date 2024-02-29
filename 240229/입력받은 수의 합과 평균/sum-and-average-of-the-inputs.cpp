#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum_val=0,a;
    double avg_val;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum_val+=a;

    }
    avg_val =(double)sum_val/n;

    cout<<fixed;
    cout.precision(1);
    cout<<sum_val<<" "<<avg_val;
    return 0;
}