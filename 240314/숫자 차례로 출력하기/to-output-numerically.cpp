#include <bits/stdc++.h>
using namespace std;


void PrintText1(int n){
    if(n==0) return;

    PrintText1(n-1);
    cout<<n<<" ";
}

void PrintText2(int n){
    if(n==0) return;
cout<<n<<" ";
    PrintText2(n-1);
}

int main(){
    int n;
    cin>>n;

    PrintText1(n);
    cout<<"\n";
    PrintText2(n);
    return 0;
}