#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr_2d[n][n]={};

    for(int i=0;i<n;i++){
        arr_2d[i][0]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++)
        arr_2d[i][j]=arr_2d[i-1][j-1]+arr_2d[i-1][j];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr_2d[i][j]<<" ";
        }
        cout<<"\n";
    }
return 0;

}