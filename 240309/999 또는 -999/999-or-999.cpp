#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    for(int i=0;i<100;i++){
        cin>>arr[i];
        if(arr[i]==999||arr[i]==-999) break;
    }
    int max_val=arr[0];
    int min_val=arr[0];

    for(int i=1;i<100;i++){
        if(arr[i]==999||arr[i]==-999) break;

        if(arr[i]>max_val) max_val=arr[i];
        if(min_val>arr[i]) min_val=arr[i];
    }
cout<<max_val<<" "<<min_val;
return 0;
}