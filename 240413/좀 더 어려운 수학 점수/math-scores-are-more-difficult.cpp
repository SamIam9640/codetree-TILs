#include <bits/stdc++.h>
using namespace std;
int main() {
int a1,b1,a2,b2;

cin>>a1>>b1>>a2>>b2;

if(a1>b1) cout<<"A";
else if(a1<b1) cout<<"B";
else if(a1==b1&&a1>b1) cout<<"A";
else if(a1==b1&&a1<b1) cout<<"B";

return 0;

}