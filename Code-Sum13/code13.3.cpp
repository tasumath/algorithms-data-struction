#include <bits/stdc++.h>
using namespace std;

deque<int> que;
vector<int> G[220000];
bool flag[220000];
bool stop;

void dfs(int v,int to){
  if(!stop) que.push_back(v);
  flag[v]=true;
  if(v==to) stop=true;


  int sz=G[v].size();
  for(int i=0;i<sz;i++){
    if(flag[G[v][i]]) continue;
    dfs(G[v][i],to);
  }
  if(!stop) que.pop_back();
  return;
}



int main(){
  int n,x,y; cin>>n>>x>>y;
  int u,v;

  for(int i=0;i<n-1;i++){
    cin>>u>>v;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  for(int i=0;i<=n;i++) flag[i]=false;
  stop=false;
  dfs(x,y);

  while(!que.empty()){
    cout<<que.front();
    que.pop_front();
    if(que.empty()) cout<<endl;
    else cout<<" ";
  }
  return 0;

}