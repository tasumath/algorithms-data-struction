#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
int N; cin>>N;
vector<int> x(N);
for(int i=0;i<N;i++) cin>>x[i];


int cnt=0;
while(true){
  for(int i=0;i<N;i++){
  if(x[i]%2==1){
    cout<<cnt<<endl;
    return 0;
  }
  x[i]=x[i]/2;
  }
  cnt++;
}

cout<<cnt<<endl;

}
//3時14分