//2차원 배열 구현

//2차원 배열 입력 받기

//조건


#include <bits/stdc++.h>
using namespace std;

int main() {
    char arr_2d[5][3];

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cin>>arr_2d[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            arr_2d[i][j]+='A'-'a';
            cout<<arr_2d[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}