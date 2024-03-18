#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;

int GetDistFromOrigin(int x,int y){
    return abs(x)+abs(y);
}

pair<int,int> distances [MAXN];

int main(){
    int n;
    cin>>n;

    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;

        distances[i]=make_pair(GetDistFromOrigin(x,y),i+1);
    }

    sort(distances,distances+n);

    for(int i=0;i<n;i++)
    cout<<distances[i].second<<"\n";
    return 0;
}