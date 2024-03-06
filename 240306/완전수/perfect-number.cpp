#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cin>>a>>b;
int cnt=0;
for(int i=a;i<=b;i++){
    int sum=0;

    for(int c=1;c<i;c++){
        if((i%c)==0){
            sum +=c;
        }
    }
        if(sum==i){
            cnt+=1;
        }
    
    

}
  cout<<cnt<<"\n";
    return 0;
}