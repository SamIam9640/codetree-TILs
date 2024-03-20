#include <bits/stdc++.h>
using namespace std;

#define N 10
#define MAXR 200
#define OFFSET 100

int xs[N],ys[N];
int xe[N],ye[N];

int checked[MAXR+1][MAXR+1];

int main(){

    for(int i=0;i<n;i++){
    cin>>xs[i]>>ys[i]>>xe[i]>>ye[i];

    xs[i]+=OFFSET;
    ys[i]+=OFFSET;
    xe[i]+=OFFSET;
    ye[i]+=OFFSET;

}

for(int i=0;i<n;i++)
for(int x=xs[i];x<xe[i];x++)
for(int y=ys[i];y<ye[i];y++)
checked[x][y]=blue;
}