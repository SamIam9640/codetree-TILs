#include <bits/stdc++.h>
#define MAXN 100

using namespace std;

int n,m;
int arr1[MAXN];
int arr2[MAXN];
int tmp[MAXN];

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>arr1[i];

    for(int i=0;i<m;i++)
    cin>>arr2[i];

    sort(arr2,arr2+m);

    int cnt=0;
    for(int i=0;i<=n-m;i++){
        for(int j=0;j<m;j++)
        tmp[j]=arr1[i+j];
        sort(tmp,tmp+m);

        bool issame=true;
        for(int j=0;j<m;j++)
        if(tmp[j]!=arr2[j]){
            issame=false;
            break;
        }
        if(issame)
        cnt++;
    }
    cout<<cnt;
    return 0;
}