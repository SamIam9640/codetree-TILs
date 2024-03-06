#include <bits/stdc++.h>
using namespace std;

int main() {
    int start,end;
    cin>>start>>end;
    int cnt_v=0;

    for(int i=start;i<=end;i++){
         int cnt=0;
         for(int j=1;j<=i;j++){
            if(i%j==0) cnt++;
         }
        if(cnt==3) cnt_v++;
    }
    cout<<cnt_v;
    return 0;
}