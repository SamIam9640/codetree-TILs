#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;

    for(int i=0;i<n;i++){
        int arr[4];
        int sum=0;

        for(int j=0;j<4;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        double avg=(double)sum/4;

        if(avg>=60) {cout<<"pass"<<"\n";
        cnt++;}
        else cout<<"fail"<<"\n";
    }
    cout<<cnt;
    return 0;
}