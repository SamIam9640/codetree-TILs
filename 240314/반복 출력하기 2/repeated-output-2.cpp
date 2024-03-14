#include <bits/stdc++.h>
using namespace std;

void PrintText(int n){
    if(n==0) return;

    PrintText(n-1);
    
    cout<<"HelloWorld";
    cout<<"\n";
}

int main(){
    PrintText(4);
    return 0;
}