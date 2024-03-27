#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int segments[5][2]={{1,3},{2,4},{5,8},{6,9},{7,10}};

    int ans=100;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++) {
        int counting[11]={};
        for(int k=0;k<n;k++){
            if(k==i||k==j)
            continue;

            int x1=segments[k][0],x2=segments[k][1];
            for(int l=x1;l<=x2;l++)
            counting[l]++;
        }

        int max_cnt=0;
        for(int k=0;k<11;k++)
        max_cnt=max(max_cnt,counting[k]);
        ans=min(ans,max_cnt);
    }
    cout<<ans;
    return 0;
}