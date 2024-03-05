#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if((i+j)%4==0) cout<<"("<<i<<", "<<j<<") "<<"\n";
            else cout<<"("<<i<<", "<<j<<") ";
    }
    
}
return 0;
}