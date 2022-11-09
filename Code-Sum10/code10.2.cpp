#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;


struct Edge{
  int to;//隣接頂点番号
  long long w; //重み
  //一旦、おまじないとして覚えておく
  Edge(int to,long long w) : to(to),w(w) {}
};
//各頂点の隣接リストを編集号で表す
using Graph = vector<vector<Edge>>;
int main(){
  int N,M;
  cin>>N>>M;

  //グラフ
  Graph(N);
  for(int i=0;i<M;i++){
    int a,b;
    long long w;
    cin>>a>>b>>w;
    G[a].push_back(Edge(b,w));
  }


}

