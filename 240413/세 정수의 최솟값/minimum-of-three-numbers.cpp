#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a<=b&&a<=c) cout<<a;
    if(b<=a&&b<=a) cout<<b;
    if(c<=a&&c<=a) cout<<c;

    return 0;
}