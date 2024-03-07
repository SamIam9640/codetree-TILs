#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    int sum=0;
    double cnt=0;

    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]==0) break;
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        sum+=arr[i];
    }
    cout.precision(1);
    cout<<fixed;
    cout<<sum<<" "<<sum/cnt;
    return 0;
}