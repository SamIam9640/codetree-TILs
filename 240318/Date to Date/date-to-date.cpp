#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int month=a,day=b;
    int elapsed_days=0;

    int num_of_days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    while(true){
        if(month==c&&day==d)
        break;
        elapsed_days++;
        day++;

        if(day>num_of_days[month])
        {
            month++;
            day=0;
        }
    }
    cout<<elapsed_days;
    return 0;
}