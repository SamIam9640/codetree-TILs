#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int cnt=1;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<< "  ";
        }
        for(int j=0;j<n-i;j++){
            cout<<cnt<<" ";
            cnt++;
            if(cnt==10) cnt=1;
        }
        cout<<"\n";
    }
    return 0;
}