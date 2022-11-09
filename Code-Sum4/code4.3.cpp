#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(void){
  int N,v; cin>>N>>v;
  vector<double> x(N);
  for(int i=0;i<N;i++) cin>>x[i];

int search=-1;
for(int i=0;i<N;i++){
  if(x[i]==v){
  search=i;
  break;
  }
}

cout << search <<endl;

}