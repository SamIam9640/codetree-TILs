#include <bits/stdc++.h>
using namespace std;

int main(){
    bool satisfied=false;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;

        if(n%3==0) satisfied=true;
    }
    if(satisfied=true)
     cout<<"1";
    else
    cout<<0;
}