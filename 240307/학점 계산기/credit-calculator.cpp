#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    double arr[n];

    double sum=0;
    double cnt=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        cnt++;
    }
    cout.precision(1);
    cout.fixed;
    cout<<sum/cnt<<"\n";
    if(sum/cnt>=4.0) cout<< "Perfect";
    else if (sum/cnt>=3.0) cout<<"Good";
    else cout<<"Poor";
return 0;
}