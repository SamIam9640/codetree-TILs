#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,sum=0,cnt=0;
    double avg=0;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(i%5==0||i%7==0){
        sum+=i;
        cnt++;
    }
    }
    avg=(double)sum/cnt;
    cout<<fixed,cout.precision(1);

    cout<<sum<<" "<<avg;
    return 0;
}