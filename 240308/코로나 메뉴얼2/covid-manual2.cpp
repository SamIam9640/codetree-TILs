#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt_arr[5]={0,};
    int type_num=0;
    char s;
    int t;

    for(int i=0;i<3;i++){
        cin>>s>>t;

        if(t>=37&&s=='Y')
        type_num=1;
        else if(t>=37)
        type_num=2;
        else if(s=='Y')
        type_num=3;
        else
        type_num=4;
        cnt_arr[type_num]++;
    }

    for(int i=1;i<=4;i++){
        cout<<cnt_arr[i]<<" ";
    }
    if(cnt_arr[1]>=2)
    cout<<"E";
    return 0;

}