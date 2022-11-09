#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int main(){
int N; cin>>N;
vector<int> a(N);

a[0]=0,a[1]=1;


for(int i=2;i<=N;i++){
  a[i]=a[i-1]+a[i-2];
}

cout<<a[N]<<endl;

}