#include <bits/stdc++.h>
using namespace std;

int main() {
   int i=4;

   for(int j=1;j<=9;j++){
    cout<<i<<" * "<<j<<" = "<<i*j;
    if(i%2==0) j=i-2;
    cout<<"\n";
   }


return 0;
}