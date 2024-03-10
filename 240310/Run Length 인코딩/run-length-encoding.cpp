#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>> str;

    string encoded ="";

    char curr_char=str[0];
    int num_char=1;

    for(int i=1;i<str.length();i++){
        if(str[i]==curr_char){
            num_char++;
        }
        else {
            encoded +=curr_char;
            encoded +=to_string(num_char);
            curr_char =str[i];
            num_char=1;
        }
    }
    encoded +=curr_char;
    encoded +=to_string(num_char);

    cout<<(int)encoded.length()<<endl<<encoded;
    return 0;
}