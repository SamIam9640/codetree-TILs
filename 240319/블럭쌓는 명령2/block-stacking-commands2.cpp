#include <bits/stdc++.h>
#define MAX_N 100
#define MAX_K 100

using namespace std;

int n,k;
int a[MAX_K+1],b[MAX_K+1];

int blocks[MAX_N+1];

int main(){
    cin>>n>>k;

    for(int i=1;i<=k;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=1;i<=k;i++)
    for(int j=a[i];j<=b[i];j++)
    blocks[j]++;

    int max=0;

    for(int i=1;i<=n;i++)
    if(blocks[i]>max)
    max=blocks[i];
    cout<<max;
    return 0;
}