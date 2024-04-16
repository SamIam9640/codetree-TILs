#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        if(i%2==0){
        for(int j=n-i/2;j>=1;j--)
        cout<<"* "; }
        else {
            for(int j=0;j<1+(i-1)/2;j++)
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0 ;
    
}