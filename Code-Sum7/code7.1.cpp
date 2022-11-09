#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int INF=2000000;

int main(void){
  int N,W; cin>>N>>W;
  vector<double> a(N);

for(int i=0;i<N;i++) cin>>a[i];

bool exist=false;
for(int bit=0;bit<(1<<N);bit++){
  int sum=0;
  for(int i=0;i<N;i++){
    if(bit & (1<<i)){
      sum=sum+a[i];
    }
  }
//cout<< sum <<endl;
  if(sum==W) exist=true;
}

if(exist) cout<<"Yes"<<endl;
else cout<<"No"<<endl;

}