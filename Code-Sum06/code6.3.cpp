#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){

int left=20;
int right=36;
int N;cin>>N;

while(right-left>1){
  int mid=left+(right-left)/2;
  cout<<"Start Game! "<<endl;
  cout<<"Is the age less than "<<mid<<" ?(yes / no)"<<endl;
  string ans;
  cin>>ans;

  if(ans=="yes") right=mid;
  else left=mid;
}

cout<<"The age is "<<left<<" !"<<endl;

}