#include <bits/stdc++.h>
using namespace std;


bool isYoon(int n){
if(n%4!=0)
return false;

if(n%100!=0)
return true;

if(n%400==0)
return true;

return false;
}

int main() {
    int y;
    cin>>y;

    
    if(isYoon(y))
    cout<<"true";
    else
    cout<<"false";

    return 0;
}