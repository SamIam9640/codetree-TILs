#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;

    int arr[11];

    arr[1]=a;arr[2]=b;
    for(int i=1;i<3;i++){
        cout<<arr[i]<<" ";
    }
    

    for(int i=3;i<11;i++){
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]%10<<" ";
    }
    return 0;
}