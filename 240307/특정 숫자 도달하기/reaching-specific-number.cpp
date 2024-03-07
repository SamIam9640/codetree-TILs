#include <iostream>
using namespace std;
int main() {
    int sum=0;
    float iphone=0;
    int a[10];
    for(int i =0; i<10;i++)
    {
        cin >>a[i];
        if (a[i]<250)
        {
            sum+=a[i];
            iphone +=1;
        }
        else
        { 
        break;
        }
    }    
    
    cout.precision(1);
    cout<<fixed;

    
    cout <<sum<<' '<<sum/iphone;
       
    return 0;
}