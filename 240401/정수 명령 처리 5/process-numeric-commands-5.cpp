#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){

    v.push_back (10);
    v.push_back (20);
    cout<<v[0]<<"\n";
    cout<<v[1]<<"\n";
    cout<<v.size()<<"\n";

    v.pop_back();
    cout<<v.size()<<"\n";

    cout<<v[0]<<"\n";
    cout<<v.size()<<"\n";
    return 0;

    }
}