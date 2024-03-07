#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        
        cin>>arr[i];

        for(int j=n-1;j>=0;i--){
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int arr[n];  // 배열을 한 번만 선언

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // 짝수를 반대 순서로 출력
        for (int j = cnt - 1; j >= 0; j--) {
            if (arr[j] % 2 == 0) {
                cout << arr[j] << " ";
            }
        }

        cnt++;  // cnt를 증가시켜서 다음 원소에 대해 반복문이 올바르게 실행되도록 함
        cout << endl;  // 각 원소 출력 후 줄 바꿈
    }

    return 0;
}