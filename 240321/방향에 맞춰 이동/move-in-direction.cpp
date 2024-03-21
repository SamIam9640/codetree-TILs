#include <bits/stdc++.h>
#define dir_num 4
using namespace std;
int n,x,y;

int dx[dir_num]={1,-1,0,0};
int dy[dir_num]={0,0,-1,1};


int main(){
cin>>n;

while(n--){
    char c_dir;int dist;
    cin>>c_dir>>dist;

    int dir;
    if(c_dir=='E')
    dir=0;
    else if(c_dir=='W')
    dir=1;
    else if(c_dir=='S')
    dir=2;
    else if(c_dir=='N')
    dir=3;

    x +=dx[dir]*dist;
    y +=dy[dir]*dist;
}
cout<<x<< " "<<y;
return 0;
}