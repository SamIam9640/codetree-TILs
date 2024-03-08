#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    int cnt_arr[10]={};

    for(int i=0;i<10;i++){
        cin>>arr[i];
        cnt_arr[arr[i]]++;
    }

    for(int i=1;i<=6;i++){
        cout<<i<<" - "<<cnt_arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}