#include <bits/stdc++.h>
using namespace std;

int main() {

    char a;
    cin>>a;

    string str[5]={"apple","banana","grape","blueberry","orange"};

int cnt=0;

for(int i=0;i<5;i++){
    if(str[i][2]==a||str[i][3]==a){
        cout<<str[i]<<endl;
        cnt++;
    }
}
cout<<cnt;
return 0;
}