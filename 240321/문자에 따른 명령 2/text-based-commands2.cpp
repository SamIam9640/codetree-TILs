#include <bits/stdc++.h>
#define Dir_num 4
using namespace std;

string dirs;

int x=0,y=0;
int curr_dir=3;

int dx[Dir_num]={1,0,-1,0};
int dy[Dir_num]={0,-1,0,1};

int main(){
    cin>>dirs;

    for(int i=0;i<(int)dirs.size();i++)
    {
        char c_dir=dirs[i];

        if(c_dir=='L')
        curr_dir=(curr_dir -1+4)%4;
        else if(c_dir=='R')
        curr_dir=(curr_dir+1)%4;
        else{
            x+=dx[curr_dir];
            y+=dy[curr_dir];
        }
    }
    cout<<x<<" "<<y;
    return 0;
}