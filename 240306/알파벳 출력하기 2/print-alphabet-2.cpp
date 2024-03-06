#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char x='A';
    for(int j=0;j<n;j++){
        for(int i=0;i<j+1;i++){
            cout<<x<<" ";
            x++;
        }
        for(int i=0;i<j;i++){
            cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}