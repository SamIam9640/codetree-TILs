#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0,cnt=0;
    double avg=0;

    for(int i=0;i<10;i++){
        int a;
        cin>>a;

        if(a>=0&&a<=200){
            sum+=a;
            cnt++;
        }
    }
    avg=(double)sum/cnt;

    cout<<fixed,cout.precision(1);

    cout<<sum<<" "<<avg;
    return 0;
}