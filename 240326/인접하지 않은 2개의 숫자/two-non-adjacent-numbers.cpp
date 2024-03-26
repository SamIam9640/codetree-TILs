#include <bits/stdc++.h>
using namespace std;

#define MAXN 100

int n;
int arr[MAXN];

int main(){
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    for(int j=i+2;j<n;j++)
    if(ans<arr[i]+arr[j])
    ans=arr[i]+arr[j];

    cout<<ans;
    return 0;
}