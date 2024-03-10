#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    string str2;

    string str_tot1;
    string str_tot2;

    cin>>str1;
    cin>>str2;

    str_tot1+=str1;
    str_tot1+=str2;

    str_tot2+=str2;
    str_tot2+=str1;

    if(str_tot1==str_tot2) cout<<"true";
    else cout<<"false";
    return 0;
}