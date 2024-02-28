#include <bits/stdc++.h>
using namespace std;

int main() {
    int numbers[10],cnt_b=0,cnt_c=0;

    for(int i=1;i<=10;i++){
        cin>>numbers[10];

        if(numbers[10]%3==0){
            cnt_b++;
        }
        if(numbers[10]%5==0){
            cnt_c++;
        }
        }
        cout<<cnt_b<<" "<<cnt_c<<"\n";
        return 0;
   }