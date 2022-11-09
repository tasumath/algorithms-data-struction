#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

int a[110000];
int main(){
int n; cin>>n;

for(int i=0;i<n;i++) cin>>a[i];

int min = + (1<<20);
int max = - (1<<20);

for(int i=0;i<n;i++){
    if(max < a[i]){
        max = a[i];
    }
}

for(int i=0;i<n;i++){
    if(a[i] < min){
        min = a[i];
    }
}

cout<<max-min<<endl;


}