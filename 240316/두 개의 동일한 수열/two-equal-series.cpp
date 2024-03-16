#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100
  int n;
    int arr1[MAX_N];
    int arr2[MAX_N];

    bool Equal(){
        for(int i=0;i<n;i++)
        {if(arr1[i]!=arr2[i])
        return false;}

        return true;
    }
int main(){
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr1[i];}

        for(int i=0;i<n;i++){
        cin>>arr2[i];

    }

    sort(arr1,arr1+n);
    sort (arr2,arr2+n);

    if(Equal())
    {cout<<"Yes";}
    else cout<<"No";
    return 0;
}