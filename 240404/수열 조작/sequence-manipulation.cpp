#include <bits/stdc++.h>
using namespace std;

deque<int> d;
int main() {
    int n;
    cin>>n;

for(int i=0;i<n;i++)
d.push_back(i+1);

while(d.size()!=1) {
    d.pop_front();
    d.push_back(d.front());
    d.pop_front();
}
cout<<d.front();
return 0;
}