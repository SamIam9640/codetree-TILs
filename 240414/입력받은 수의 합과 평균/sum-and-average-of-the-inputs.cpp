#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0,cnt=0;
    double avg=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        sum+=a;
        cnt++;
    }
    avg=(double) sum/cnt;

    cout<<fixed,cout.precision(1);

    cout<<sum<<" "<<avg;
    return 0;
}