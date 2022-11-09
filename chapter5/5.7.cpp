#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

template<class T>void chmax(T& a, T b){
  if(a<b) a=b;
}

int main(){
string S,T; cin>>S>>T;
long long N=S.size();
long long M=T.size();
vector<vector<long long>> dp(N+1,vector<long long>(M+1,0));

//i<=jをif文の中に条件で加えていた
//反例はbad,abcacの二つ。i=2でabcacの一つ目のaを拾えない。
for(int i=1;i<=N;i++){
  for(int j=1;j<=M;j++){
    if(S[i-1]==T[j-1]){
      chmax(dp[i][j],dp[i-1][j-1]+1);
  }
  chmax(dp[i][j],dp[i-1][j]);
  chmax(dp[i][j],dp[i][j-1]);
  }
}
//dp[N][j]の値が切り替わるところが、
//文字列Tのj文字目が(位置的にはT[j-1])、Sと等しい文字を発見した位置になっている。

//確認用
for(int i=0;i<=N;i++){
for(int j=0;j<=M;j++){
//cout<<dp[i][j];
}
//cout<<"\n"<<endl;
}

cout<<dp[N][M]<<endl;


}
