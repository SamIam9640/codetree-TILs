#include <bits/stdc++.h>
using namespace std;

int n=5;
int segmetns[5][2]={{1,3},{2,4},{5,8},{6,9},{7,10}};

int main(){
    int ans=100;
    for(int i=0;i<n;i++){
        int counting[11]={};
        for(int j=0;j<n;j++){
            if(j==i)
            continue;

            int x1=segments[j][0], x2=segments[j][1];
            for(int k=x1;k<=x2;k++)
            counting[k]++;
        }
        int max_cnt=0;
        for(int j=0;j<11;j++)
        max_cnt=max(max_cnt,counting[j]);
        ans=min(ans,max_cnt);
    }
    cout<<ans;
    return 0;
}