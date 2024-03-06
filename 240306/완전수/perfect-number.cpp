#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
 int a,b;
 cin >> a >>b;
	int cnt=0;
   
	for(int i = a; i <= b; i++) {
		int val =0;
	
		for (int s=1; s<=i-1; s++){
           if ((i%s)==0) {
             val +=s;
           }
    }
            if(val ==i) {
           cnt +=1;
           }
    
	}
    	cout << cnt << endl;
	
	return 0;
}