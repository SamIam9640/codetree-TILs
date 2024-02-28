#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,cnt=0;

	for(int i=1;i<=10;i++){
		cin>>a;

		if(a%2!=0){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}