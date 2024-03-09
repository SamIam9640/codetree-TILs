#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    int arr_2d[100][100]={};

    int num=1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr_2d[i][j]=num;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr_2d[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}