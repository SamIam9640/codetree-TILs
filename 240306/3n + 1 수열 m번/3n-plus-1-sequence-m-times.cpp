#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m;
    int cnt=0;
          cin>>n;

    for(int i=0;i<m;i++){
        

          while(n!= 1){
            if(n%2==0){ n/=2;}
            else n=n*3+1;
            cnt++;
          }
        cout<<cnt<<"\n";
    }
return 0;
}