#include <bits/stdc++.h>
#define MAX_N 100

using namespace std;

int arr[MAX_N];

int MaxValue(int n){
    if(n==0) return arr[0];

    return max(MaxValue(n-1),arr[n]);
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<MaxValue(n-1);
    return 0;
}