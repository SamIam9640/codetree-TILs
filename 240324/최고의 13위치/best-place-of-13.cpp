#include <bits/stdc++.h>
#define MAXN 20
using namespace std;

int n;
int arr[MAXN][MAXN];

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>arr[i][j];

    int max_cnt=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n-2;j++){
        int cnt=arr[i][j]+arr[i][j+1]+arr[i][j+2];
        max_cnt=max(max_cnt,cnt);
    }
cout<<max_cnt;
return 0;


}