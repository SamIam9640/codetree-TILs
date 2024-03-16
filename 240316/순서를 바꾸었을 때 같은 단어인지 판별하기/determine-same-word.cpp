#include <bits/stdc++.h>
using namespace std;
   string str1,str2;
   
bool Equal(){
    if(str1==str2) return true;
    return false;
}

int main(){
 
    cin>>str1>>str2;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    if(Equal())
    cout<<"Yes";
    else cout<<"No";
    return 0;
}