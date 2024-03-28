#include <bits/stdc++.h>
#define MAX_N 1000

int n,b;
int P[MAX_N],S[MAX_N];

using namespace std;

int main(){
//입력

cin>>n>>b;
for(int i=0;i<n;i++)
{
    cin>>P[i]>>S[i];
}

int ans=0;
int tmp[MAX_N]={};
//선물 가능한 학생의 최대 명수를 구함.
for(int i=0;i<n;i++)
//가격을 tmp 배열에 저장함.
tmp[i]=S[i];
tmp[i]/=2;


}