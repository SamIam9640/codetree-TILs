#include <bits/stdc++.h>
using namespace std;

void Above(int &n){
    if(n>0);
    else n*=-1;
}

int main(){
    int n,arr[n];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Above(arr[n]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}