#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]*arr[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}