#include <bits/stdc++.h>
using namespace std;


    void PrintSq(int n){
        int cnt=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<cnt<<" ";
                cnt++;
                if(cnt==10) cnt=1;
            }
            cout<<"\n";
        }
    }


int main() {
    int n;
    cin>>n;
    PrintSq( n);
    return 0;
}