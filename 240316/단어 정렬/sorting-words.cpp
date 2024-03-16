#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100

string words_list[MAX_N];
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>words_list[i];
    }

    sort(words_list,words_list+n);
    for(int i=0;i<n;i++){
        cout<<words_list[i]<<"\n";
    }
    return 0;
}