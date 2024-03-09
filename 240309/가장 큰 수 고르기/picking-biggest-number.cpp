#include <bits/stdc++.h>
using namespace std;

int main() {
    int max_val=0;
    int arr[10]={};

    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]>max_val) max_val=arr[i];
    }
    cout<<max_val;
    return 0;
}