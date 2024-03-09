#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[100][100]={};
    int cnt=0;

    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                arr[j][i]=cnt;
                cnt++;
            }
        }
       else
       for(int j=n-1;j>=0;j--){
        arr[j][i]=cnt;
        cnt++;
       }
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}