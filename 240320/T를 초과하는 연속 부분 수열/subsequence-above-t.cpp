#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000
int main(){
    int n,t;
    int arr[MAXN];

    cin>>n>>t;
    for(int i=0;i<n;i++){
    cin>>arr[i];}

    int ans=0,cnt=0;

    for(int i=0;i<n;i++){
    if(arr[i]>t)
    cnt++;
    else
    cnt=0;

    ans=max(ans,cnt);}

    cout<<ans;
    return 0;
}