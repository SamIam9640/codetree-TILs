#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(true){
        cin>>n;
        if(n<25){
            cout<<"Higher"<<"\n";
        }
        if( n>25){
            cout<<"Lower"<<"\n";
        }
        if( n==25){
            cout<<"Good"<<"\n";
            break;
        }
    }
    return 0;
}