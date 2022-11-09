#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(void){
  int N; cin>>N;
  vector<double> x(N),y(N);

  for(int i=0;i<N;i++) cin>>x[i]>>y[i];


double dis_minimum=100000000.0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
    if(i==j)
    continue;
    double dis_koho=distance(x[i],y[i],x[j],y[j]);
    if(dis_minimum>dis_koho){
      dis_minimum=dis_koho;
    }
    }
  }
  cout<<dis_minimum<<endl;
}