#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=0;
    while(1){
        int n;
        cin>>n;

        if(n%2!=0) continue;

        else cout<<n/2<<"\n";
        cnt++;

          if(cnt>=3) break;
    }
  
return 0;
}