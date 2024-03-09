#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int arr_2d[5][5]={};

for(int i=0;i<5;i++){

        arr_2d[0][i]=1;
        arr_2d[i][0]=1;
    
}

for(int i=1;i<5;i++){
    for(int j=1;j<5;j++){
        arr_2d[i][j]=arr_2d[i][j-1]+arr_2d[i-1][j];
    }
}

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr_2d[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}