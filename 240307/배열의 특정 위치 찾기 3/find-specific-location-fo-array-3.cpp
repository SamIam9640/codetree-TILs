#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int k;
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==0){
            k=i;
            break;

        }

    }
        cout<<arr[k-1]+arr[k-2]+arr[k-3];
        return 0;
    
}