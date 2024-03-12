#include <bits/stdc++.h>
using namespace std;



void PrintSq(int n){
    int cnt=1;
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            if(cnt==10) {cnt=1;}
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<"\n";
    }
}

int main() {
    
    int num;
    cin>>num;
   
   
 PrintSq(num);
return 0;
}