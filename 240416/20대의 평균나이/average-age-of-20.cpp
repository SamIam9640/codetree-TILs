#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0,cnt=0;
    double avg=0;
    while(1) {
        int a;
        cin>>a;
 if((a>=30)||(a<=19)) break;
        cnt++;
        sum+=a;
       
    }

    cout<<fixed,cout.precision(2);

    avg=(double)sum/cnt;
    cout<<avg;

    return 0;
}