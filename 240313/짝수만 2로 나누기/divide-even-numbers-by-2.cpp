#include <bits/stdc++.h>
#define max_n 50

using namespace std;

int n;
int arr[max_n];
void modify(int *arr){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        arr[i]/2;
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    modify(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}