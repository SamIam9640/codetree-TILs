#include <bits/stdc++.h>


#define MAXN 100
#define MAXR 200
#define OFFSET 100
using namespace std;
int n;
int x1[MAXN];
int y1[MAXN];
int x2[MAXN];
int y2[MAXN];

int checked[MAXR+1][MAXR+1];

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x1[i]>>y1[i];
        x2[i]=x1[i]+8;
        y2[i]=y1[i]+8;

        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;
    }
    for(int i=0;i<n;i++)
    for(int x=x1[i];x<x2[i];x++)
    for(int y=y1[i];y<y2[i];y++)
    checked[x][y]=1;

    int area=0;
    for(int x=0;x<=MAXR;x++)
    for(int y=0;y<=MAXR;y++)
    if(checked[x][y])
    area++;

    cout<<area;
    return 0;
}