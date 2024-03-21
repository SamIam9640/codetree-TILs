#include <bits/stdc++.h>
#define MAXNUM 100
#define Dir_num 4

using namespace std;

int n,m;
int arr[MAXNUM][MAXNUM];

int dx[Dir_num] ={0,1,0,-1};
int dy[Dir_num] ={1,0,-1,0};

int curr_x,curr_y;
int dir;

bool InRange(int x,int y){
    return 0<=x&&x<n&&0<=y&&y<m;
}

int main(){
    cin>>n>>m;

    arr[curr_x][curr_y]=1;

    for(int i=2;i<=n*m;i++){
        int next_x=curr_x+dx[dir],next_y=curr_y+dy[dir];

        if(!InRange(next_x,next_y)||arr[next_x][next_y]!=0)
        dir=(dir+1)%4;

        curr_x=curr_x+ dx[dir]; curr_y=curr_y+dy[dir];
        arr[curr_x][curr_y]=i;    }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
            cout<<"\n";
        }
        return 0;
}