#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    if(a>0&&a%1==0){
        for(int i=1;i<=b;i++){
            cout<<a;
        }
    }
    else if(a<=0) cout<<0;
    return 0;
}