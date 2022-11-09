#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
using Interval = pair<long long,long long>;

bool cmp(const Interval &a,const Interval &b){
  return a.second < b.second;
  //workのうち、secondの属性を基準にしてソートする！！！！
}

int main(){
long long N; cin>>N;
vector<Interval> work(N); 
for(int i=0;i<N;i++) cin>>work[i].first>>work[i].second;

sort(work.begin(),work.end(),cmp);

long long current_time=0;
for(int i=0;i<N;i++){
if(current_time <= work[i].second){
    current_time = current_time + work[i].first;
}

if(current_time>work[i].second){
    cout<<"No"<<endl;
    return 0;
}
}

cout<<"Yes"<<endl;


}