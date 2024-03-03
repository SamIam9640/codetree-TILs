#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<(i*n)+j+1<<" ";
                else
                cout<<(i*n)+n-j<<" ";
            }
        }
       cout<<"\n";
        }
           return 0;
    




//반복문으로 해결이 가능합니다 ! 홀수 번째 행에서는 순서대로 1씩 증가시키면서 출력하면 되고 
//짝수 번째 행에서는 시작 숫자를 식으로 구해서 1씩 감소시키면 됩니다 :)