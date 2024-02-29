#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,cnt_a=0,cnt_b=0,cnt_c=0;
    cin>>a;

    for(int i=1;i<=a;i++){
        if(i%12==0){
            cnt_c++;
        }
        else if(i%3==0){
            cnt_b++;
        }
        else if(i%2==0){
            cnt_a++;
        }
    }
    cout<<cnt_a<<" "<<cnt_b<<" "<<cnt_c<<"\n";
    return 0;
}