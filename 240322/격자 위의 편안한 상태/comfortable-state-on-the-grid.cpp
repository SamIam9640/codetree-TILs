#include <bits/stdc++.h>
#define MAXN 100
#define Dir_num 4

using namespace std;

int n,m;
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

int main() {
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        arr[x][y]=1;

        if(AdjacentCnt(x,y)==3)
        cout<<1<<"\n";
        else
        cout<<0<<"\n";
    }
    return 0;
}