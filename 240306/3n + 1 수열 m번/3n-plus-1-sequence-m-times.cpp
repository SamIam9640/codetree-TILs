#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int m;
        cin>>m;
        int cnt=0;

        while(m!=1){
            if(m%2==0){
                m/=2;
                cnt++;
            }
            else {m=3*m+1;
            cnt++;}
        }
        cout<<cnt<<"\n";
    }
    return 0;
}