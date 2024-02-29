#include <bits/stdc++.h>
using namespace std;

int n,sum_val=0;

int main() {
cin>>n;
for(int i=n;i<=100;i++){
    sum_val +=i;
}
cout<<sum_val;
return 0;
}