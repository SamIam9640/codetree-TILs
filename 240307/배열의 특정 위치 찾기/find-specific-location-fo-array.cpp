#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    int sum1=0;
    int sum2=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=1;i<10;i+=2){
        sum1 +=arr[i];
        cnt1 ++;
    }
    for(int i=2;i<10;i+=3){
        sum2 +=arr[i];
        cnt2 ++;
    }
    cout<<fixed, cout.precision(1);

    cout<<sum1<<" "<< (double)sum2/cnt2;
    return 0;
    
}