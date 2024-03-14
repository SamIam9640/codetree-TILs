#include <bits/stdc++.h>
using namespace std;

void PrintText(int n){
    if(n==0) return;

    PrintText(n-1);

    cout<<"HelloWorld";
    cout<<"\n";
}

int main(){
    int n;
    cin>>n;

    PrintText(n);
    return 0;
}