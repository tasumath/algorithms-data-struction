#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(void){
int N,key; cin>>N>>key;
vector<int> a(N+1);
for(int i=0;i<N;i++) cin>>a[i];

sort(a.begin(),a.end());
//sortを使うには#include<algorithm>が必要
int left=0;
int right=N-1;
int search;
//right-left>=0?
while(right-left>=0){
  search=left+(right-left)/2;//区間の真ん中
  if(a[search]==key){
    cout<<"Yes"<<endl;
    return 0;
  }
  if(a[search]<key){
    left=search+1;
  }
  if(a[search]>key){
    right=search-1;
  }
}
cout<<"No"<<endl;

}