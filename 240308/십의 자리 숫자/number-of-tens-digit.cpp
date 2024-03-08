#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int cnt_arr[10]={};

    for(int i=0;i<99;i++){
        cin>>arr[i];
        if(arr[i]==0)
        break;
        if(arr[i]<10)
        continue;
        cnt_arr[arr[i]/10]++;
}

for(int i=1;i<10;i++){
    cout<<i<<" - "<<cnt_arr[i]<<"\n";
}
return 0;
}