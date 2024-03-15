#include <bits/stdc++.h>
using namespace std;

int CountNum(int a){
    if(a==1) return 0;

    if(a%2==0) 
    return CountNum(a/2)+1;

    else
    return CountNum(3*a+1)+1;
}

int main(){
    int n;
    cin>>n;

    cout<<CountNum(n);
    return 0;
}