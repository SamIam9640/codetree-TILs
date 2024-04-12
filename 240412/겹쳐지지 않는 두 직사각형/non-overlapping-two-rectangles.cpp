#include <bits/stdc++.h>
#define MAX_N 5
using namespace std;
int n,m;
int grid[MAX_N][MAX_N];
int board[MAX_N][MAX_N];

void ClearBoard() {
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            board[i][j]=0;
        }
    }
}

void Draw(int x1,int y1,int x2,int y2) {
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            board[i][j]++;
        }
    }
}

bool CheckBoard(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]>=2)
            return true;
            return false;
        }
    }
}

bool Overlapped(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
    ClearBoard();
    Draw(x1,y1,x2,y2);
    Draw(x3,y3,x4,y4);
    return CheckBoard();
}

int RectSum(int x1,int y1,int x2,int y2){
    int sum_of_nums=0;
    for(int i=x2;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum_of_nums +=grid[i][j];

            return sum_of_nums;
        }
    }
}

int FindMaxSum(int x1,int y1,int x2,int y2) {
    int max_sum=INT_MIN;

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    for(int k=i;k<n;k++)
    for(int l=j;l<m;l++) {
        if(!Overlapped(x1,y1,x2,y2,i,j,k,l))
        max_sum=max(max_sum, RectSum(x1,y1,x2,y2)+RectSum(i,j,k,l));
    }
    return max_sum;
}

int FindMaxSum() {
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    for(int k=i;k<n;k++)
    for(int l=j;l<m;l++)
    max_sum=max(max_sum,FindMaxSum(i,j,k,l));
    return max_sum;
    }
int main() {
    cin>>n>>m;

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>grid[i][j];

    int ans=FindMaxSum();
    cout<<ans;
    return 0;
}