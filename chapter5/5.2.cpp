#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

template<class T>void chmax(T& a, T b){
  if(a<b) a=b;
}

int main(){
  long long N,W; cin>>N>>W;
  vector<long long>w(N+1);
  for(int i=1;i<=N;i++) cin>>w[i];

vector<vector<long long>> dp(N+1,vector<long long>(W+1,0));
long long sum=0;
for(int i=1;i<=N;i++){
  for(int j=1;j<=W;j++){
  if(w[i]>j){
  chmax(dp[i][j],dp[i-1][j]);
  }
  if(w[i]<=j){
  chmax(dp[i][j],dp[i-1][j-w[i]]+w[i]);
  chmax(dp[i][j],dp[i-1][j]);
  }
  }
}

if(dp[N][W]==W) cout<<"Yes"<<endl;
else cout<<"No"<<endl;

//確認用
int count=0;
vector<long long>w(N+1);
for(int i=0;i<=N;i++){
  for(int j=0;j<=W;j++){
    if(dp[i][j]<=W){
      if(cnt[dp[i][j]]){
      cnt[dp[i][j]]++;
      }
    }
  }
  cout<<"\n"<<endl;
}
}