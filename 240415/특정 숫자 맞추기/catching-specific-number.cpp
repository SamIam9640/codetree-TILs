#include <bits/stdc++.h>
using namespace std;


int main() {
    while(true){
        int num;
        cin>>num;

        if(num<25){
            cout<<"Higher"<<"\n";
        }
        else if(num>25){
            cout<<"Lower"<<"\n";
        }
        else {cout<<"Good"<<"\n";
        break;}
    }
    return 0;
}