#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
int N,v; cin>>N>>v;
vector<double> x(N);
for(int i=0;i<N;i++) cin>>x[i];

int i_search=0;
for(int i=0;i<N;i++){
if(x[i]==v){
  i_search=i_search+1;
}
}
cout<<i_search<<endl;


}