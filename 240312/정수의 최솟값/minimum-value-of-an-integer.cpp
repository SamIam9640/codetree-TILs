#include <bits/stdc++.h>
using namespace std;

int Min(int a, int b,int c){
    return min(min(a,b),c);
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    cout<<Min(a,b,c);
    return 0 ;
}