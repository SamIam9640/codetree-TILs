#include <bits/stdc++.h>

#define MAXN 100
#define MAXM 10000

using namespace std;


    int n,m,k;
    int penalized_person[MAXM];
    int penalty_num[MAXN+1];

int main() {
cin>>n>>m>>k;
for(int i=0;i<m;i++)
cin>>penalized_person[i];

int ans=1;
for(int i=0;i<m;i++){
    int target=penalized_person[i];
    penalty_num[target]++;

    if(penalty_num[target]>=k){
        ans=target;
        break;
    }
}
cout<<ans;
return 0;
}