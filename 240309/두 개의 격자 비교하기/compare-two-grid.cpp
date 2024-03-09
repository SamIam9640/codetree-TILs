#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;

    cin>>n>>m;
    int arr_1[10][10];
    int arr_2[10][10];
    int arr_3[10][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr_1[n][m];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr_2[n][m];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr_1[n][m]==arr_2[n][m]) cout<<"0";
                else cout<<"1";

                cin>>arr_3[n][m];
                cout<<arr_3[n][m];
            }
        }
    }
    return 0;
}