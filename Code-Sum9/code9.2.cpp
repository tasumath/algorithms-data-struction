#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
const int MAX=100000;//キュー配列の最大サイズ


int qu[MAX];
int tail=0,head=0;//キューの要素区間を表す変数
//キューを初期化する
void init(){
  head=tail=0;
}
//キューが空かどうか判定する
bool isEmpty(){
  return(head==tail);
}
bool isFull(){
  return(head==(tail+1)%MAX);//tail=MAX-1となったときにリングバッファ発動
}

//enqueue(イメージは右から挿入)
void enqueue(int x){
  if(isFull()){
    cout<<"error: queue is full."<<endl;
    return;
  }
  qu[tail]=x;
  tail++;
  if(tail==MAX) tail=0;//リングバッファの終端に来たら0に
}

//dequeue(イメージは左から退場する)
int dequeue(){
  if(isEmpty()){
    cout<<"error: queue is empty."<<endl;
    return -1;
  }
  int res=qu[head];
  head++;
  if(head==MAX) head=0;//リングバッファの終端に来たら0に
  return res;
}

int main(){

  init(); //キューを初期化
  enqueue(3); 
  enqueue(5);
  enqueue(7);
  cout<<dequeue()<<endl;
  cout<<dequeue()<<endl;

  enqueue(9);
  cout<<dequeue()<<endl;
  cout<<dequeue()<<endl;
//右から挿入する(enqueue)
//左から退場する(dequeue)

}