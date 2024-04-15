#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;

    for(int i=1;i<=100;i++){
        sum+=i;

        if(sum>=n) break;
    }
cout<<sum;
return 0;

}