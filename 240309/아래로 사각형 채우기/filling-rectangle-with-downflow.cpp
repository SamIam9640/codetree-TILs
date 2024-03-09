#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr_2d[10][10]={};

    int cnt=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr_2d[j][i]=cnt++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr_2d[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
    }