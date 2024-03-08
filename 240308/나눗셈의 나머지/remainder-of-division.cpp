#include <iostream>

using namespace std;

int main() {
    int a, b, nam;
    
    cin >> a >> b;

    int cnt[b] = {};

    // for(int i = 0; i < b; i++)
    //     cnt[i] = 0;

    while(true){
        nam = a % b;
        cnt[nam] += 1;
        a = a / b;
        if(a <= 1)
            break;
    }
    
    int sum = 0;
    for(int i = 0; i < b; i++){
        sum += cnt[i] * cnt[i];
    }
    cout << sum;

    return 0;
}