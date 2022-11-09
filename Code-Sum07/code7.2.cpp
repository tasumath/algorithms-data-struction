#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

//vectorの属性を定義している。
using Interval = pair<int,int>;

bool cmp(const Interval &a,const Interval &b){
  return a.second<b.second;
  //interのうち、secondの属性のみをソートする。
}


int main(){
int N; cin>>N;
vector<Interval> inter(N);

//vectorの属性をpair<int,int>としている。
//inter[i].firstはinterの開始時刻が格納されている。
for(int i=0;i<N;i++) cin>>inter[i].first>>inter[i].second;

sort(inter.begin(),inter.end(),cmp);

int res=0;
int current_end_time=0;
for(int i=0;i<N;i++){
  if(inter[i].first<current_end_time) continue;

  res++;
  current_end_time=inter[i].second;
}

cout<<res<<endl;

}
