#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    int arr[10][10]={};

    for(int i=0;i<m;i++){
        int r,c;

        cin>>r>>c;
        arr[r][c]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}