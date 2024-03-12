#include <bits/stdc++.h>
using namespace std;

 int Mul(int a,int b){
    int cnt=1;
    for(int i=1;i<=b;i++){
        cnt*=a;
  }
        return cnt;
    
    
 }
int main() {
    int a,b;
    cin>>a>>b;

    cout<<Mul(a,b);
    return 0;
    
}