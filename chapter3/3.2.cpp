#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;

int a[110000];

int main(){
    int n; cin>>n;
    int v; cin>>v;
    for(int i=0;i<n;i++) cin>>a[i];

    int cnt=0;

    for(int i=0;i<n;i++){
        if(a[i]==v) cnt++;
    }

    cout<<cnt<<endl;
}