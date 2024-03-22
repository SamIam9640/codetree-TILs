#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
int n;
int arr[MAXN]={};

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int sum_dist=0;
        for(int j=0;j<n;j++)
        sum_dist +=abs(j-i)*arr[j];

        ans=min(ans,sum_dist);
    }

    cout<<ans;
    return 0;
}