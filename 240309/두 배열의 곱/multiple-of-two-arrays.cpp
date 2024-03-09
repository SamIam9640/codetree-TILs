#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr_2d1[100][100]={};
    int arr_2d2[100][100]={};
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr_2d1[100][100];
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr_2d2[100][100];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr_2d[i][j]=arr_2d1[i][j]*arr_2d2[i][j];
            }
        }
        cout<<arr_2d[i][j]<<"\n";
    }
    return 0;
}