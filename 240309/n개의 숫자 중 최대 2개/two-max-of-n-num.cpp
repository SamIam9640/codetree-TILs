#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100],n;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    cout<<a[0]<<" "<<a[1];
    return 0;
}