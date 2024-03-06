#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0;i<3;i++){
    int a,b;
        int prod=1;
    cin>>a>>b;

    
        for(int j=a;j<=b;j++){
            prod*=j;
        }
        cout<<prod<<"\n";
    }
    return 0;
}