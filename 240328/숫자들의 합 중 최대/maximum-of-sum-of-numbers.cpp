#include <bits/stdc++.h>

using namespace std;

int x,y;

int DigitSum(int n){
    if(n<10)
    return n;

    else
    return DigitSum(n/10)+(n%10);
}

int main() {
    cin>>x>>y;

    int ans=0;

    //각 숫자에 대해
    //각 자리 숫자의 합을 구해
    //그 중 최댓값을 계산합니다.
    for(int i=x;i<=y;i++)
    ans=max(ans,DigitSum(i));

    cout<<ans;

    return 0;
}