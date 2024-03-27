#include <bits/stdc++.h>
#define MAX_N 100
#define MAX_NUM 1000

using namespace std;
int n;
int a[MAX_N],b[MAX_N];
int main() {
    //입력 
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];

    //뺄 직원을 구합니다
    int ans=0;

    for(int i=0;i<n;i++){
        //i번 직원의 구간을 제외한 나머지 구간에서
        //운행 되고 있는 시간을 구합니다.
        int count[MAX_NUM]={};

        for(int j=0;j<n;j++){
            //i번째 점은 제외합니다
            if(j==i) continue;
            //모든 구간을 카운팅합니다.
            for(int k=a[j];k<b[j];k++)
            count[k]++;
        }
        int time=0;

        for(int j=1;j<MAX_NUM;j++){
            if(count[j]) time++;
        }
        //운행 되고 있는 시간 중 최댓값을 구합니다.
        ans=max(ans,time);
    }
    cout<<ans;
    return 0;

}