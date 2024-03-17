#include <bits/stdc++.h>
using namespace std;


class Product{
    public:
    string name;
    int code;

    Product(string name,int code){
        this->name=name;
        this->code=code;
    }
};
int main(){
    
Product product1=Product("codetree",50);

string name2;
int code2;
cin>>name2>>code2;

Product product2=Product(name2,code2);

cout<<"product "<<product1.code<<" is "<<product1.name<<"\n";
cout<<"product "<<product2.code<<" is "<<product2.name<<"\n";
return 0;

}