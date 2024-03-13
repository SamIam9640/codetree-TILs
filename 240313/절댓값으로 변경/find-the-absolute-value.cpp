#include <bits/stdc++.h>
using namespace std;

#define MAX_N 50

int n;
int arr[MAX_N];

void AbsoluteValue(int *arr){
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        arr[i]=-arr[i];
    }

}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    AbsoluteValue(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}