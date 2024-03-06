#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    char x='A';

for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<"  ";
    }
    for(int j=0;j<n-i;j++){
        cout<<x<<" ";
        x++;
    }
    if(x>'Z') cout<<x;
 cout<<"\n";
}
return 0;

}