#include <bits/stdc++.h>
using namespace std;
#define MAXN 100

int n;
string arr[MAXN];

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int cnt=0;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    for(int k=j+1;k<n;k++)
    if(arr[i]=='C'&&arr[j]=='O'&&arr[k]=='W')
    cnt++;

    cout<<cnt;
    return 0;
}