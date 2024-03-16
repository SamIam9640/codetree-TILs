#include <bits/stdc++.h>
#define MAX_N 100
using namespace std;

int num[MAX_N];
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    sort(num,num+n);
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";

    sort(num,num+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";
    return 0;
}