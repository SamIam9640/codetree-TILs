#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1,s2;
    string c, d;

    cin>>s1>>s2;
    int a=0;
    int b=0;

    for(int i=0;i<s1.length();i++){
        if(s1[i]>='0'&&s1[i]<='9')
        a++;
        else break;
        
        if(s2[i]>='0'&&s2[i]<='9')
        b++;
        else break;
    }
    c=s1.substr(0,a);
    d=s2.substr(0,b);

    int c_int=stoi(c);
    int d_int=stoi(d);


    cout<<c_int+d_int;
    return 0;
    }