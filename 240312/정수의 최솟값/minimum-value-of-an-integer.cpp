#include <bits/stdc++.h>
using namespace std;

int Add(int a,int b,int c){
return min(min(a,b),c);
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    cout<<Add(a,b,c);
    return 0;
}