#include <bits/stdc++.h>
using namespace std;
#define MAXN 100

int n,k;
int arr[MAXN];

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int max_sum=0;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++)
        sum+=arr[j];

        max_sum=max(max_sum,sum);
    }
    cout<<max_sum;
    return 0;
}