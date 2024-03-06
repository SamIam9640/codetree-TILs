#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            if(j==n+1-i) {
            cout<<i<<" * "<<j<<" = "<<i*j<<"\n";              
            }
            else  cout<<i<<" * "<<j<<" = "<<i*j<<" / ";
        }
    }
    return 0;
}