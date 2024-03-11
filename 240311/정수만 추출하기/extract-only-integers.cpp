#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b,s1,s2;

    cin>>a>>b;

    int idx1=0;
    int idx2=0;

    for(int i=0;i<a.length();i++){
        if(a[i]<='9'&&a[i]>='0'){
            idx1++;
            break;
        }
    }
    for(int i=0;i<b.length();i++){
        if(b[i]<='9'&&b[i]>='0'){
            idx2++;
            break;
        }
    }
    s1=a.substr(0,idx1);
    s2=b.substr(0,idx2);

    int s1_int=stoi(s1);
    int s2_int=stoi(s2);
    cout<<s1_int+s2_int;
    return 0;
}