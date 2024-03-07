#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0;
    int arr[10];
    int cnt=0;

for(int i=0;i<10;i++){
    cin>>arr[10];
    if(arr[i]<250){
    sum+=arr[i];
    cnt+=1;
    }
    else break;
}
cout.precision(1);
cout<<fixed;

    cout<<sum<<" "<<sum/cnt;
    return 0;
}