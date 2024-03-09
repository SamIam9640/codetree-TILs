#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[100],n,max1,max2;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if (a[0]>a[1]){
        max1=a[0];
        max2=a[1];
    }
    else {max1=a[1];
    max2=a[0];}

    for(int i=2;i<n;i++){
        if(a[i]>=max1){
            max2=max1;

            max1=a[i];
        }
        else if(a[i]>max2){
            max2=a[i];
        }
    }
cout<<max1<<" "<<max2;
return 0 ;

}