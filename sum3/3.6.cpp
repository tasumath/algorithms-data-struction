#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
int K,N; cin>>K>>N;

int cnt=0;
for(int i=0;i<=N;i++){
  for(int j=0;i+j<=N;j++){
    int k=N-i-j;
    if(i<=K && j<=K && k<=K){
      cnt++;
    }
  }
}

cout<<cnt<<endl;

}