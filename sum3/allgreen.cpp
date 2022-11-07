#include <bits/stdc++.h>
using namespace std;

int main(void){
  int d,g; cin>>d>>g;
  vector<int> a(d);
  vector<int> b(d);
  
  for(int i=0;i<d;i++) cin>>a.at(i)>>b.at(i);

int min_solve=10000;
bool hantei=true;
int i=0;
  while(i<d){
    int N=a.at(i);
    for(int j=0;j<(1<<d-1);j++){
      for(int k=0;k<N;k++){
        if(g<= 100*(k+1)){
          if(k+1<min_solve) min_solve=k+1;
        }
        cout<<k<<endl;
        if(k==N-1 && g<=100*(k+1)+b.at(i)){
          if(k+1<min_solve) min_solve=k+1;
        }
      }
    }
    i++;
  }

 cout<<min_solve<<endl;

//橋渡し(入力例2が分からん)
}