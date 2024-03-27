#include <bits/stdc++.h>
#define MAXN 6
using namespace std;
int arr[MAXN];
int n=6;

int Diff(int i,int j,int k,int l){
    int total_sum=0;
    for(int l=0;l<n;l++)
    total_sum +=arr[l];

    int sum1=arr[i]+arr[j];
    int sum2=arr[k]+arr[l];
    int sum3=total_sum-sum1-sum2;

    int ret=abs(sum1-sum2);
    ret=max(ret,abs(sum2-sum3));
    ret=max(ret,abs(sum3-sum1));
    return ret;
}
int main(){
for(int i=0;i<n;i++){
cin>>arr[i];}

int min_diff=INT_MAX;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)


for(int k=0;k<n;k++)
for(int l=k+1;l<n;l++){
if(k==i||k==j||l==i||l==j)
continue;
min_diff=min(min_diff,Diff(i,j,k,l));

}
cout<<min_diff;
return 0;
}