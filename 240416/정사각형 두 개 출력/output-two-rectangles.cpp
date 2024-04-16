#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0;i<2;i++){
        for(int a=0;a<n;a++){
            for(int b=0;b<n;b++){
                cout<<"*";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}