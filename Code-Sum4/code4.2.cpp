#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int func(int x){
cout<<"func("<<x<<")を呼び出しました"<<endl;

if(x==0) return 0;

int result=func(x-1)+x;

cout<<"ここまでの和"<<result<<"です"<<endl;

return result;

}

int main(void){
int N; cin>>N;
int Ans;

Ans=func(N);

cout<<Ans<<endl;
return 0;

}
