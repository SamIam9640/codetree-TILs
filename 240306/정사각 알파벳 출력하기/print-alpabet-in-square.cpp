#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char x;
    cin>>n;
    x='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<x;
            x++;
        }
        cout<<"\n";
    }
    return 0;
}