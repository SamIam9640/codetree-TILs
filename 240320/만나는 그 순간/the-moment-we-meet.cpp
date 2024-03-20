#include <bits/stdc++.h>
using namespace std;

#define MAXT 1000000
int n,m;
int pos_a[MAXT+1],pos_b[MAXT+1];


int main(){
    cin>>n>>m;

    int time_a=1;
    for(int i=0;i<n;i++){
        char d;int t;
        cin>>d>>t;

        while(t--){
            if(d=='R')
            pos_a[time_a]=pos_a[time_a-1]+1;
            else
            pos_a[time_a]=pos_a[time_a-1]-1;
            time_a++;
        }
    }

    int time_b=1;
    for(int i=0;i<m;i++){
        char d;int t;
        cin>>d>>t;
 while(t--){
            if(d=='R')
            pos_b[time_b]=pos_b[time_b-1]+1;
            else
            pos_b[time_b]=pos_b[time_b-1]-1;
            time_b++;
        }
    }

    int ans=-1;
    for(int i=1;i<time_a;i++){
        if(pos_a[i]==pos_b[i]){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}