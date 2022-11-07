#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int INF=2000000;

int main(void){
  int N; cin>>N;
  vector<double> a(N);

for(int i=0;i<N;i++) cin>>a[i];

int max=-1;
int min=100000000;
for(int i=0;i<N;i++){

if(max<a[i]){
  max=a[i];
  cout << max <<endl;
}
if(min>a[i]){
 min=a[i];
 cout << min <<endl;
}

}

cout << max-min <<endl;

}