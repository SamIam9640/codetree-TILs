#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int k=0;k<(2*n)-(2*i)-1;k++){
            cout<<"* ";
            
        }
        cout<<"\n";
        }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-2;j++){
           cout<<"  ";
        }
        for(int k=0;k<(2*i)+3;k++){
            cout<<"* ";
        }    
        cout<<"\n";
    }
    return 0;
}