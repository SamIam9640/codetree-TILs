#include <bits/stdc++.h>
using namespace std;

int main() {
    double arr[8];
    double sum=0;
    double cnt=0;

    for(int i=0;i<8;i++){
        cin>>arr[i];
        cnt++;
        sum+=arr[i];
        
    }
    cout.precision(1);
    cout<<fixed;
    cout<<sum/cnt;

    return 0;
}