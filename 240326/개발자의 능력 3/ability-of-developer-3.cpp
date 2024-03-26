#include <bits/stdc++.h>
using namespace std;

int numbers[4]={1,5,3,6};

int GetDiff(int i,int j){
    int sum1=numbers[i]+numbers[j];
    int sum2=0;
    for(int k=0;k<4;k++)
    sum2 +=numbers[k];
    sum2 -=sum1;
    return abs(sum1-sum2);
}

int main(){
    int min_diff=100;
    for(int i=0;i<4;i++)
    for(int j=i+1;j<4;j++)
    min_diff=min(min_diff,GetDiff(i,j));

    cout<<min_diff;
    return 0;
}