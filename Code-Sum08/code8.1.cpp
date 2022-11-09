#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

  vector<int> a= {4,3,12,7,11,1,9,8,14,6};

  //0番目の値を出力
  cout<<a[0]<<endl;
  cout<<a[2]<<endl;

  a[2]=5;

  cout<<a[2]<<endl;
}