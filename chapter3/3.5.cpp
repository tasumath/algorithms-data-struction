#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

int main(){

int n; cin>>n;
int a[210];

for(int i=1;i<=n;i++) cin>>a[i];

bool hantei =true;
int cnt=0;
while(hantei){
    for(int i=1;i<=n;i++){
        if(a[i] % 2 == 1){
            hantei=false;
        }
        a[i]=a[i]/2;
    }
    if(hantei) cnt++;
}

cout<<cnt<<endl;

}