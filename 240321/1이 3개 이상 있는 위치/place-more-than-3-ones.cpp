#include <bits/stdc++.h>
using namespace std;

#define MAXN 100
#define Dir_num 4

using namespace std;

int n;
int arr[MAXN][MAXN];

int dx[Dir_num]={0,1,0,-1};

int dy[Dir_num]={1,0,-1,0};

bool InRange(int x,int y){
    return 0<=x&&x<n&&0<=y&&y<n;
}

int AdjacentCnt(int x,int y){
    int cnt=0;
    for(int i=0;i<Dir_num;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(InRange(nx,ny)&&arr[nx][ny]==1)
        cnt++;
    }
    return cnt;
}

int main(){
    cin>>n;


    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>arr[i][j];

    int ans=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(AdjacentCnt(i,j)>=3)
    ans++;

    cout<<ans;
    return 0;
}