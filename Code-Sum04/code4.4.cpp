#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int gcd(int x,int y){
int r;
if(x%y==0) return y;
else{
  r=x%y;
  gcd(y,r);
}
}

int main(void){
int n,m; cin>>n>>m;
int Ans;
Ans=gcd(n,m);
cout<<Ans<<endl;

}