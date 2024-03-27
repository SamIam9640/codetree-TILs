#include <bits/stdc++.h>
#define MAXN 6
using namespace std;

int n=MAXN;
int arr[MAXN];

int Diff(int i,int j,int k){
    int total_sum=0;
    for(int l=0;l<n;l++)
    total_sum +=arr[l];

    int sum1=arr[i]+arr[j]+arr[k];
    int sum2=total_sum-sum1;
    return abs(sum1-sum2);
}

int main(){
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int min_diff=INT_MAX;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    for(int k=j+1;k<n;k++)
    min_diff=min(min_diff,Diff(i,j,k));
    
    cout<<min_diff;
    return 0;
}