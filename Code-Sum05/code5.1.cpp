#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(void){
int N; cin>>N;
vector<int> h(N),dp(N);
for(int i=0;i<N;i++) cin>>h[i];

int total=0;

for(int i=0;i<N;i++){
  if(i==0) dp[0]=0;
  if(i==1) dp[1]=abs(h[i]-h[i-1]);
  if(i>1){
    int v1=abs(h[i]-h[i-1])+dp[i-1];
    int v2=abs(h[i]-h[i-2])+dp[i-2];
    dp[i]=min(v1,v2);
  }
}


for(int i=0;i<N;i++)
cout<<dp[i]<<endl;

}