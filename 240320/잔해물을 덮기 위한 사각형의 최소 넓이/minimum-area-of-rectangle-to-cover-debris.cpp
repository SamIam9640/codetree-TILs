#include <bits/stdc++.h>

#define N 2
#define MAXR 2000
#define OFFSET 1000

using namespace std;

int xs[N],ys[N];
int xe[N],ye[N];

int checked[MAXR+1][MAXR+1];

int main(){

    for(int i=0;i<N;i++){
    cin>>xs[i]>>ys[i]>>xe[i]>>ye[i];

    xs[i]+=OFFSET;
    ys[i]+=OFFSET;
    xe[i]+=OFFSET;
    ye[i]+=OFFSET;
    }

    for(int i=0;i<N;i++)
    for(int x=xs[i];x<xe[i];x++)
    for(int y=ys[i];y<ye[i];y++)
    checked[x][y]=i+1;

    int min_x=MAXR,max_x=0,min_y=MAXR,max_y=0;
    bool first_rect_exist=false;
    for(int x=0;x<=MAXR;x++)
    for(int y=0;y<=MAXR;y++)
    if(checked[x][y]==1){
        first_rect_exist=true;
        min_x=min(min_x,x);
        max_x=max(max_x,x);
        min_y=min(min_y,y);
        max_y=max(max_y,y);
    }

    int area;
    if(!first_rect_exist)
    area=0;
    else
    area=(max_x-min_x+1)*(max_y-min_y+1);

    cout<<area;
    return 0;
}