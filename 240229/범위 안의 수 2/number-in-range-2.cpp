#include <bits/stdc++.h>
using namespace std;

int main() {
    int b,sum_val=0,cnt=0;
double avg_val;
    for(int i=1;i<=10;i++){
        cin>>b;
        if(b>=0&&b<=200){
        sum_val +=b;
        cnt++;}
    }
    avg_val =(double)sum_val/cnt;

    cout<<fixed;
    cout.precision(1);
    cout<<sum_val<<" "<<avg_val;
    return 0;
}