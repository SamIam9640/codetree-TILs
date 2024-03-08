#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
     cin>>n;
    int cnt;
    int arr[100]={1,n};
   

    while(true){
        cnt++;
        arr[cnt]=arr[cnt-1]+arr[cnt-2];
        if(arr[cnt]>100)
        break;
    }
    for(int i=0;i<=cnt;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}