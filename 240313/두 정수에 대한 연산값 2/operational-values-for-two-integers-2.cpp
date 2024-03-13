#include <bits/stdc++.h>
using namespace std;

void Hello(int &a,int &b){
    if(a>b)
    {a*=2;b+=10;};
    if(b>a)
    {a+=10;b*=2;};
}

int main() {
    int a,b;
    cin>>a>>b;

    Hello(a,b);
    cout<<a<< " "<<b;
    return 0;
}