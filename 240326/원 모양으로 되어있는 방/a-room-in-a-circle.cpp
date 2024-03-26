#include <bits/stdc++.h>
#define MAXN 1003

using namespace std;

int n;
int a[MAXN];

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];

    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int sum_dist=0;
        for(int j=0;j<n;j++){
            int dist=(j+n-1)%n;
            sum_dist +=dist *a[j];
        }
        ans=min(ans,sum_dist);
    }
    cout<<ans;
    return 0;
}