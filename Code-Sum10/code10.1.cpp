#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
//グラフ型
using Graph = vector<vector<int>>;

int main(){
  int N,M; cin>>N>>M;

  Graph G(N);
  for(int i=0;i<M;i++){
    int a,b;
    cin>>a>>b;
    G[a].push_back(b);
  }



}