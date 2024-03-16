#include <bits/stdc++.h>
using namespace std;
#define MAX_N 1000
int num[MAX_N];

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>num[i];
      
    }

    
sort(num,num+n);

  cout<<num[k-1];
return 0;

    
}