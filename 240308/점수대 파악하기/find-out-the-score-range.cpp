#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[100];
    int cnt_arr[11]={};

    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0)
        break;

        if(arr[i]<10)
        continue;
        cnt_arr[arr[i]/10]++;

    }
    for(int i=10;i>=1;i--){
        cout<<i<<"0 - "<<cnt_arr[i]<<"\n";
    }
    return 0;
}