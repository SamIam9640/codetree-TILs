#include <bits/stdc++.h>
using namespace std;

int Dev(int a){
    int sum=0;
    for(int i=1;i<=a;i++){
        sum+=i;
        }
        return sum/10;
    
}
int main() {
    int num1;
    cin>>num1;

    cout<<Dev(num1);


    return 0;


}