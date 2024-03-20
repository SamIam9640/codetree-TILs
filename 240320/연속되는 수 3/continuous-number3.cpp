//입력 // 초기화 // 반복

#include <bits/stdc++.h>
#define MAXN 1000

using namespace std;

int main() {

    int n;
    int arr[MAXN];
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans=0,cnt=0;

    for(int i=0;i<n;i++){
        if(i>=1&&arr[i]*arr[i-1]>0)
        cnt++;
        else
        cnt=1;

        ans=max(ans,cnt);
    }
cout<<ans;
return 0;

}