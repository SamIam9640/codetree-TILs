#include <bits/stdc++.h>
#define MAXN 1000
using namespace std;

class Number{
    public:
    int number,index;
    Number(int number,int index){
        this->number=number;
        this->index=index;
    }
    Number() {}
};

bool Cmp(Number a,Number b)
{if(a.number!=b.number)
return a.number<b.number;
return a.index<b.index;}

Number numbers[MAXN];

int main(){
    int n,num_cache;
    int answer[MAXN];

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num_cache;
        numbers[i]=Number(num_cache,i);
    }

    sort(numbers,numbers+n,Cmp);

    for(int i=0;i<n;i++)
    answer[numbers[i].index]=i+1;

    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }

    return 0;
}