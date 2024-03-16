#include <bits/stdc++.h>
#define MAX_N 100
using namespace std;

int arr[MAX_N];
int main(){

    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

sort(arr,arr+n,greater<int>());

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 cout<<"\n";
return 0;
}