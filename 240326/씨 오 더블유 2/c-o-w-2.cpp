#include <bits/stdc++.h>
using namespace std;


int n;
string str;

int main(){
    cin>>n;
    cin>>str;

    int cnt=0;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    for(int k=j+1;k<n;k++)
    if(str[i]=='C'&&str[j]=='O'&&str[k]=='W')
    cnt++;

    cout<<cnt;
    return 0;
}