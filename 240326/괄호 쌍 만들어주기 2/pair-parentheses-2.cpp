#include <bits/stdc++.h>
using namespace std;
string str;

int main(){
    cin>>str;

    int n=(int) str.size();

    int cnt=0;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n-1;j++)
    if(str[i]=='('&&str[i+1]=='('&&str[j]==')'&&str[j+1]==')')
    cnt++;

    cout<<cnt;
    return 0;
}