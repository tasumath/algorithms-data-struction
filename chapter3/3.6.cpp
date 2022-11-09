#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

int main(){

int k,n; cin>>k>>n;

int cnt=0;
for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
        int z = n - i - j;
        if(z>=0 && z<=k){
            cnt++;
        }
    }
}

cout<<cnt<<endl;

}