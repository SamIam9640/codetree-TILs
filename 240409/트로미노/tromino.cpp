#include <bits/stdc++.h>
#define MAX_N 200
using namespace std;

int n,m;
int grid[MAX_N][MAX_N];

int shapes[6][3][3]={
    {{1,1,0},
    {1,0,0},
    {0,0,0}},
    
    {{0,1,0},
    {1,1,0},
    {0,0,0}},

    {{1,1,0},
    {0,1,0},
    {0,0,0}},

    {{1,0,0},
    {1,1,0},
    {0,0,0}},

    {{1,1,1},
    {0,0,0},
    {0,0,0}},

    {{1,0,0},
    {1,0,0},
    {1,0,0}},
};

int GetMaxSum(int x,int y){
    int max_sum=0;

    for(int i=0;i<6;i++){
        bool is_possible=true;
        int sum=0;
    
    for(int dx=0;dx<3;dx++)
    for(int dy=0;dy<3;dy++){
        if(shapes[i][dx][dy]==0) continue;
        if(x+dx>=n||y+dy>=m) is_possible=false;
        else sum+=grid[x+dx][y+dy];
    }
    max_sum=max(max_sum,sum);
    }
    return max_sum;
}
int main() {
    cin>>n>>m;

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>grid[i][j];

int ans=0;

for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
ans=max(ans,GetMaxSum(i,j));

cout<<ans;
return 0;

}