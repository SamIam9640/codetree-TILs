#include <bits/stdc++.h>
#define MAX_N 100
using namespace std;
string words[MAX_N]={};
int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>words[i];
    sort(words,words+n);
    for(int i=0;i<n;i++){
        cout<<words[i]<<"\n";
    }
    return 0;
}