#include <bits/stdc++.h>
#define MAX_N 100
#define MAX_NUM 40000

using namespace std;

int n;
int x[MAX_N],y[MAX_N];

int main() {

    cin>>n;
    for(int i=0;i<n;i++)
    cin>>x[i]>>y[i];

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        int min_x=MAX_NUM,max_x=1;
        int min_y=MAX_NUM,max_y=1;
        for(int j=0;j<n;j++){
            if(j==i) continue;

            min_x=min(min_x,x[j]);
            max_x=max(max_x,x[j]);
            min_y=min(min_y,y[j]);
            max_y=max(max_y,y[j]);
        }
        ans=min(ans,(max_x-min_x)*(max_y-min_y));
    }
    cout<<ans;
    return 0;
}