#include <bits/stdc++.h>
#define MAX_N 100
using namespace std;
int n,k;
int arr[MAX_N];
int main(){
    // 입력
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int ans=-1;
//모든 쌍에 대해서 터질 수 있는 폭탄을 찾고
//그 중 번호가 최대인 값을 찾습니다.
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
{
    if(j-i>k)
    break;

    if(arr[i]!=arr[j])
    continue;

    ans=max(ans,arr[i]);
}

cout<<ans;

return 0;
}