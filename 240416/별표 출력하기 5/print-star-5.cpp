#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

   for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        for(int k=1;k<=i;k++)
        cout<<"*";
        cout<<" ";
    }
    cout<<"\n";
   }
    return 0;
}