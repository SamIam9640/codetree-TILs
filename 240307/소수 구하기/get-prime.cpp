#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i==1) continue;

        bool satisfied =true;

        for(int j=2;j<i;j++){
            if(i%j ==0) satisfied =false;
        }
        if(satisfied) cout<<i<<" ";
    }
    return 0;
}