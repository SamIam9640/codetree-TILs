#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;

    string a,b;
    cin>>s1>>s2;
    a=s1+s2;
    b=s2+s1;

    int a_int=stoi(a);
    int b_int=stoi(b);

    cout<<a_int+b_int;
    return 0;

    


}