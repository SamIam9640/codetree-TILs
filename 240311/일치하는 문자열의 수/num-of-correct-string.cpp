#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str1;
    string str2;
    cin>>n>>str1;

    int cnt=0;

    for(int i=0;i<n;i++){
        cin>>str2;
        if(str2==str1){
            cnt++;
        }

    }
    cout<<cnt;


return 0;

}