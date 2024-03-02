#include <bits/stdc++.h>
using namespace std;

int main() {
    //공백 0 1 2 3 4. 별 9 7 5 3 1

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout << "  ";
        }

        for(int j=0;j<(2*n)-(2*i)-1;j++){
            cout << "* ";
        }
        cout<<"\n";
    }
return 0;
}


//간단히 생각해서 2씩 감소하는 경우에는 행 i에 대한 식이 
//-2i +(상수)형태로 나타나게 됩니다.
//d씩 차이가 나는 경우에는 di+(상수)형태가 되고요.
//-2i+ (상수)형태에서 i=0일 때 *이 정확히 2n-1개가 나와야 하기에,
//(상수)값에 2n-1이 들어가야 하므로 식은 -2i+(2n-1)이
//되는 것이다.