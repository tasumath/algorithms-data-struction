#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

fibo(int x){
  cout<<"fibo("<<x<<")を呼び出しました"<<endl;
  if(x==0) return 0;
  if(x==1) return 1;
  return fibo(x-1)+fibo(x-2);
}

int main(void){
int N; cin>>N;
int Ans;
Ans=fibo(N);


cout<<Ans<<endl;

}