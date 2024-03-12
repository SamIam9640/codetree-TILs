#include <bits/stdc++.h>
using namespace std;

void PrintRect(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"1";
        }
        cout<<"\n";
    }
}

int main(){
    int row_num,col_num;
    cin>>row_num>>col_num;
    PrintRect(row_num,col_num);
return 0;
}