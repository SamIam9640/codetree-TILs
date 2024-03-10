#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str[20];
    char c;
    cin>>c;

    int cnt=0;
    int len_all=0;

    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    for(int i=0;i<n;i++){

        if(str[i][0]==c){
            cnt++;
            int len=str[i].length();
            len_all+=len;
    }
}

cout<<fixed;
cout.precision(2);
cout<<cnt<< " "<<len_all/cnt;
return 0;

}