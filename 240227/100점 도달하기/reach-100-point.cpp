#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    for (int i=n;i<=100;i++){
        if(60<=n<70) cout<<"D ";
        else if (70<=n<80) cout<<"C ";
        else if (80<=n<90) cout<<"B ";
        else if (n>=90) cout<<"A ";
    }
    return 0;
}