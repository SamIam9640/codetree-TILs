#include <bits/stdc++.h>
#define MAXN 100
#define MAXR 200
#define OFFSET 100
using namespace std;

int n;
int x1[MAXN],x2[MAXN];

int checked[MAXR+1];

int main(){

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x1[i]>>x2[i];


        x1[i] +=OFFSET;
        x2[i] +=OFFSET;
    }

    for(int i=0;i<n;i++){
        for(int j=x1[i];j<x2[i];j++)
        checked[j]++;
    }

    int max=0;
    for(int i=0;i<=MAXR;i++)
    if(checked[i]>max)
    max=checked[i];

    cout<<max;
    return 0;

}