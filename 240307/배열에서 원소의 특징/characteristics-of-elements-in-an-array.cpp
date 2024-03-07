#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];
    int k;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]%3==0){
            k=i;
            break;
        }
    }
    cout<<arr[k-1];
    return 0;
}