#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int diff=(24*60*a+60*b+c)-(11+60*11+24*60*11);
    if(diff<0)
    cout<<-1;
    else
    cout<<diff;
    
    return 0;
}