#include <bits/stdc++.h>
#define MAXN 100
#define MAXK 100
using namespace std;

int n,k;
int a[MAXK+1],b[MAXN+1];

int blocks[MAXN+1];

int main(){
    cin>>n>>k;

    for(int i=1;i<=k;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=1;i<=k;i++){
        for(int j=a[i];j<=b[i];j++)
        blocks[j]++;
    }

    int max=0;

    for(int i=1;i<=n;i++){
        if(blocks[i]>max)
        max=blocks[i];

    }
    cout<<max;
    return 0;
}