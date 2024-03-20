#include <bits/stdc++.h>


#define MAXN 100
#define MAXR 200
#define OFFSET 100
using namespace std;
int n;
int xs[MAXN];
int ys[MAXN];
int xe[MAXN];
int ye[MAXN];

int checked[MAXR+1][MAXR+1];

int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>xs[i]>>ys[i];
        xe[i]=xs[i]+8;
        ye[i]=ys[i]+8;

        xs[i]+=OFFSET;
        ys[i]+=OFFSET;
        xe[i]+=OFFSET;
        ye[i]+=OFFSET;
    }
    for(int i=0;i<n;i++)
    for(int x=xs[i];x<xe[i];x++)
    for(int y=ys[i];y<ye[i];y++)
    checked[x][y]=1;

    int area=0;
    for(int x=0;x<=MAXR;x++)
    for(int y=0;y<=MAXR;y++)
    if(checked[x][y])
    area++;

    cout<<area;
    return 0;
}