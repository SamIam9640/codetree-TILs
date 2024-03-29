#include <bits/stdc++.h>
using namespace std;

int x,y;

int main() {
    cin>>x>>y;

    int ans=0;
//각 숫자에 대해
//흥미로운 숫자인지 아닌지 여부를 판단합니다.
    for(int i=x;i<=y;i++) {
        //digit배열을 만들어 가 자리 숫자의 개수를 저장합니다.
        //all_digits에는 총 자리수의 개수를 저장합니다.
        int num=i;
        int digit[10]={};
        int all_digits=0;
        while(num){
            digit[num%10]++;
            all_digits++;
            num /=10;
        }
//interesting : i가 흥미로운 숫자이면 true, 아니면 false
        bool interesting= false;
//흥미로운 숫자가 되기 위해서는,
//숫자 하나만 all_digits-1회 등장해야 합니다.
        for(int j=0;j<10;j++)
        if(digit[j]==all_digits-1)
        interesting=true;

        if(interesting)
        ans++;
    }
    cout<<ans;

    return 0;
}