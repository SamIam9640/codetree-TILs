#include <bits/stdc++.h>
using namespace std;

int Plus(int a,int b){
    return a+b;
}
int Mul(int a, int b){
    return a*b;
}
int Min(int a,int b){
    return a-b;
}
int Dev(int a,int b){
    return a/b;
}

int main(){
    int a,c;
    char o;

    cin>>a>>o>>c;

    if(o=='+')
    cout<<a<<" + "<<c<<" = "<<Plus(a,c);
    else if(o=='-')
    cout<<a<<" - "<<c<<" = "<<Min(a,c);
    else if (o=='*')
    cout<<a<<" * "<<c<<" = "<<Mul(a,c);
    else if(o=='/')
    cout<<a<<" / "<<c<<" = "<<Dev(a,c);
    else cout<<"False";
    return 0;
}