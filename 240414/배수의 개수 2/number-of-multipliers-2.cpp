#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt=0;
    int n=10;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num%2!=0) cnt++;
    }
    cout<<cnt;
    return 0;
}