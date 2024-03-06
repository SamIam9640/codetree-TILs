#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=0;
    int m,n;
    cin>>m;

    for(int i=0;i<m;i++){
        if(m%2==0){
            m/=2;
            cnt++;
        }
        else {m=3*m+1;
        cnt++;}
        if (m==1) cout<<cnt;
        break;
        cout<<"\n";
    }
return 0;
}