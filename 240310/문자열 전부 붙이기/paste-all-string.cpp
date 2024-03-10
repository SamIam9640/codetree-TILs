#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str[100];
    string str_tot;

    for(int i=0;i<n;i++){
        cin>>str[i];
         str_tot+=str[i];
    }

   

    cout<<str_tot;
    return 0;
}