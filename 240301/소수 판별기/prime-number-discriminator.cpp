#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;

    bool satisfied=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            satisfied=false;
        }
    }
    if (satisfied==true){
        cout<<"P";
    }
    else {
        cout<<"C";
        
    }
    return 0;
}