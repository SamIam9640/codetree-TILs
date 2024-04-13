#include <bits/stdc++.h>
using namespace std;

int main() {
    char c1,c2,c3;
    int a1,a2,a3;

    cin>>c1>>a1;
    cin>>c2>>a2;
    cin>>c3>>a3;

    if(c1=='Y'&&a1>=37){
        if((c2=='Y'&&a2>=37)||(c3=='Y'&&a3>=37))
        cout<<"E";
        else cout<<"N";
    }
    else{
        if((c2=='Y'&&a2>=37)&&(c3=='Y'&&a3>=37))
        cout<<"E";
        else cout<<"N";
    }

 return 0;   
}