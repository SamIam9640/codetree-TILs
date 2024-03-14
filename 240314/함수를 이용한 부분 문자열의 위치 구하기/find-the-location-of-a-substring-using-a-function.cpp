#include <bits/stdc++.h>
using namespace std;
string str1, str2;

bool Substr(int start_idx){
    int n=(int) str1.length();
    int m=(int) str2.length();

    if(start_idx+m-1>=n)
    return false;

    for(int i=0;i<m;i++){
        if(str1[start_idx+i]!=str2[i])
        return false;
    }
return true;

}

int FindIndex(){
    int n=(int) str1.length();
    for(int j=0;j<n;j++){
        if(Substr(j)) 
        return j;
    }
    return -1;
}

int main(){

    cin>>str1>>str2;

    cout<<FindIndex();
    return 0;



}