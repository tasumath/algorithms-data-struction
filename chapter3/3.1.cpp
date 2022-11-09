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

    int found_id = -1;

    for(int i=0;i<n;i++){
        if(a[i]==v){
            found_id=i;
        }
    }
    
    cout<<found_id<<endl;

}
