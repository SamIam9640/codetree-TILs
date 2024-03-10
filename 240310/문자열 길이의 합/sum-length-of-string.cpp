#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
string str[10];
int cnt=0;
int len_all=0;

for(int i=0;i<10;i++){
    cin>>str[i];
}
for(int i=0;i<10;i++){
    len_all+=str[i].length();
    if(str[i][0]=='a') cnt++;
    
}


cout<<len_all<<" "<<cnt;
return 0;

}