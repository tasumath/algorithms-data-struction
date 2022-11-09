#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

int main(void){
  int N; cin>>N;
  vector<int> a(N);
  vector<int> b(N);
  for(int i=0;i<N;i++) cin>>a[i]>>b[i];

  vector<int> d(N);

int sum=0;
int amari;
for(int i=N-1;i>=0;i--){
  a[i]=sum+a[i];
  if(a[i]%b[i]==0){
    amari=0;
    sum=sum+amari;
    cout<<sum<<endl;
  }
  if(a[i]%b[i] != 0){
    amari=a[i]%b[i];
    int r=0;
    r=b[i]-amari;
    sum=sum+r;
    cout<<sum<<endl;
  }
}

cout<<sum<<endl;

}