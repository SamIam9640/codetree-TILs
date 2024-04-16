#include <bits/stdc++.h>
using namespace std;

int main(){
    bool satisfied=true;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;

        if(n%3!=0) satisfied=false;
    }
    if(satisfied=true)
     cout<<"1";
    else
    cout<<0;
}