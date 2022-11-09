#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int MAX=100000;

int st[MAX];
int top=0;
//スタックを初期化する
void init(){
  top=0; //スタックの添え字を初期位置に
}

//スタックが空かどうかを判定する
bool isEmpty(){
  return(top==0); //スタックサイズが0かどうか
}
//スタックが満杯かどうかを判定する
bool isFull(){
  return(top==MAX);
}
//push
void push(int x){
  if(isFull()){
    cout<<"error: stack is full."<<endl;
    return;
  }
  st[top]=x; //xを格納して
  top++; //topを進める
}
//pop
int pop(){
  if(isEmpty()){
    cout<<"error: stack is empty."<<endl;
    return -1;
  }
  top=top-1;//topをデクリメントして
  return st[top]; //topの位置にある要素を返す
}

int main(){
init(); //スタックの初期化

push(3); // スタック3を挿入する
push(5);
push(6);
push(7);

cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<pop()<<endl;

push(9);

}