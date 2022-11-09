#include<iostream>
using namespace std;

int func(int x){
if(x==1) return 1;

return func(x-1)*x;

}

int main(void){
int N; cin>>N;
int Ans;

Ans=func(N);

cout<<Ans<<endl;
return 0;

}

//実装部分に宣言用の書式で書いているから。