#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int INF=2000000;

int main(void){
  int N;
  string S; cin>>S;
  N=S.length();

long long res=0;
for(int bit=0;bit<(1<<N-1);bit++){
  long long tmp=0;
  for(int i=0;i<N-1;i++){
    tmp=10*tmp;
    tmp=tmp+(S[i]-'0');
    if(bit & (1<<i)){
      res=tmp+res;
      tmp=0;
    }
  }
  tmp=10*tmp;
  tmp=tmp+(S.back()-'0');
  res=res+tmp;
}
cout<<res<<endl;

}