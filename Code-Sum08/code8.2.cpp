#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//自己参照構造体
struct Node{
  Node* next;//次がどのノードを指すか
  string name;//ノードに付随している値
  Node(string name_="") : next(NULL),name(name_) {}
};
//番兵を表すノードをグローバル領域に置いておく
Node* nil;

//初期化
void init(){
  nil = new Node();
  nil->next =nil;//初期状態ではnilがnilを指すようになる。
}

//連結リストを出力する
void printList(){
  Node* cur = nil->next; //先頭から出発
  for(; cur!=nil; cur=cur->next){
    cout<<cur->name<<"->";
  }
  cout<<endl;
}
//連結リストの挿入操作
//ノードpの直後にノードvを挿入する
//ノードpのデフォルト引数をnilとしておく
//そのためinsert(v)を呼び出す操作は、リストの先頭への挿入を表す
void insert(Node* v,Node* p=nil){
  v->next = p->next;
  p->next = v;
}

int main(){
  //初期化
  init();

  //作りたいノードの名前の一覧
  //最後のノード([山本])から順に挿入することに注意
  vector<string> names= {"yamamoto",
  "watanabe",
  "ito",
  "takahashi",
  "suzuki",
  "sato"}; 

for(int i=0;i<(int)names.size();i++){
  //ノードを作成する
  Node* node=new Node(names[i]);
  //作成したノードを連結リストの先頭に挿入する
  insert(node);

  //各ステップの連結リストの様子を出力する
  cout<<"step "<<i<<": ";
  printList();
}


}