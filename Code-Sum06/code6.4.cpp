#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
const int INF = 20000000;

int main(){
  int N,K; cin>>N>>K;
  vector<int>a(N);
  vector<int>b(N);
  for(int i=0;i<N;i++) cin>>a[i];
  for(int i=0;i<N;i++) cin>>b[i];

sort(b.begin(),b.end());

b.push_back(INF);

int min_value=INF;

for(int i=0;i<N;i++){
auto iter=lower_bound(b.begin(),b.end(),K-a[i]);
//bの中でK-a[i]以上の範囲での最小値を示すイテレータ

int val=*iter;

if(val+a[i]<min_value){
  min_value=val+a[i];
}
}

cout<<min_value<<endl;

}

