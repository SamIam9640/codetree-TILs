#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    int cnt_arr[10]={};
    int ans=0;

    while(a>1){
        cnt_arr[a%b]++;
        a/=b;
    }
    
    for(int i=0;i<b;i++){
        ans +=cnt_arr[i]*cnt_arr[i];
    }

cout<<ans;
}