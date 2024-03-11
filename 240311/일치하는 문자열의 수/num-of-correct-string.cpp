#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string s1,s2;
    cin>>n>>s1;
    int cnt=0;

    for(int i=0;i<n;i++){
        cin>>s2;
        if(s1==s2) cnt++;
    }
    cout<<cnt;
    return 0;
}