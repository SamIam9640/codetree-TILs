#include <bits/stdc++.h>
#define MAXT 1000000


using namespace std;

int n,m;
int pos_a[MAXT+1],pos_b[MAXT+1];

int main(){
cin>>n>>m;

int time_a=1;
for(int i=0;i<n;i++){
    int v,t;
    cin>>v>>t;

    while(t--){
        pos_a[time_a]=pos_a[time_a-1]+v;
        time_a++;
    }
}
int time_b=1;
for(int i=0;i<m;i++){
    int v,t;
    cin>>v>>t;

    while(t--){
        pos_b[time_b]=pos_b[time_b-1]+v;
        time_b++;
    }
}

int leader=0,ans=0;
for(int i=1;i<time_a;i++){
    if(pos_a[i]>pos_a[i]){
        if(leader==2)
        ans++;
    
    leader=1;
}
else if(pos_b[i]<pos_b[i]){
    if(leader==1)
    ans++;

    leader=2;
}
}

cout<<ans;
return 0;
}