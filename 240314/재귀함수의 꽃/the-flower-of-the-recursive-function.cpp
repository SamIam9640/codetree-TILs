#include <bits/stdc++.h>
using namespace std;

void PrintNum1(int n){
    if(n==0) return;
cout<<n<<" ";
    PrintNum1(n-1);
}

void PrintNum2(int n){
    if(n==0) return;

    PrintNum2(n-1);
cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;

    PrintNum1(n);PrintNum2(n);
    return 0;
}