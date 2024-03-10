#include <bits/stdc++.h>
using namespace std;

int main() {

    string str[10];
    string str_tot;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        str_tot+=str[i];
    }
    int len=str_tot.length();

    for(int i=0;i<len;i++){
        cout<<str_tot[i];
        if((i+1)%5==0) cout<<"\n";
    }
    return 0;
}