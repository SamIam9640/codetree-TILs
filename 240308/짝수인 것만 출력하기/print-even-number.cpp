#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int new_arr[100];
    int cnt=0;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
          if(arr[i]%2==0) 
          new_arr[cnt++] = arr[i];
    }

    for(int i=0;i<cnt;i++){

        cout<<new_arr[i]<<" ";
    }
    return 0;
  
}