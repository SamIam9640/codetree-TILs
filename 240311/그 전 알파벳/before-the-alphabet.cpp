#include <bits/stdc++.h>
using namespace std;


int main() {
    char c;
    cin>>c;

    if(c=='a') {c='z';}
    else c=(char)(c-1);
    cout<<c<<"\n";
    return 0;
}