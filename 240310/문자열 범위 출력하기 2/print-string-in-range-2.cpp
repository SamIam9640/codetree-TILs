#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
string str[100];
int len;

for(int i=0;i<n;i++){
    cin>>str[i];
}
cin>>n;

for(int i=len-1;i>=len-n;i--){
    cout<<str[i];

}
return 0;
}