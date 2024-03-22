#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
 int n;
    int a[MAXN];

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

int cnt=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
for(int k=j+1;k<n;k++)
if(a[i]<=a[j]&&a[j]<=a[k])
cnt++;
cout<<cnt;
return 0;
}