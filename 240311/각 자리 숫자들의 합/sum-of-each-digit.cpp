#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string n_str;
    int sum=0;
    //입력
    n_str=to_string(n);
    //정수를 문자열로 변환
    for(int i=0;i<n_str.length();i++){
        sum+=n_str[i]-'0';
    }
 
cout<<sum;
    return 0;
}