#include <bits/stdc++.h>
using namespace std;
#define NUMBER 10
int main(){
int N;
string S; cin>>S;//文字列として読み込む
N=S.size();//文字列の長さを記憶させる

//以下、bit全探索を用いる
for(int bit=0;bit<(1<<N-1);bit++){
  int sum=S[0]-'0';
  for(int j=0;j<N-1;j++){
    if(bit & (1<<j)) sum=sum+(S[j+1]-'0');
    else sum=sum-(S[j+1]-'0');//(S[j+1]-'0');と括弧でくくる
    }
  //sumと指定した値(NUMBER)が一致していれば、そのときのbit数を用いて表示を行う
  if(sum==NUMBER){
    cout<<S[0];
    for(int j=0;j<N-1;j++){
      if(bit & (1<<j)) cout<<"+";
      else cout<<"-";
      cout<<S[j+1];
    }
    cout<<"=10"<<endl;
    return 0;//一通り示せたら終了
  }
}

//ループを抜ける = 解が見つからなかったことを意味する。
cout<<"そのような組み合わせは存在しない"<<endl;

}