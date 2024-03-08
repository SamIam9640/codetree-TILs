#include <bits/stdc++.h>
using namespace std;

int main() {
char n;
cin>>n;
char word[6]={'L','E','B','R','O','S'};

int idx=-1;

for(int i=0;i<6;i++){
    if(word[i]==n){
        idx=i;
    }
}
if(idx== -1){
    cout<<"None";
}
else cout<<idx;
return 0;
}