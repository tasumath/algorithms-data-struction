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
    
    int max = a[0];
    int second_max=a[0];
    int answer=0;

    for(int i=1;i<n;i++){
            if(max<a[i]){
                second_max = max;
                max=a[i];
                  if(second_max < max){
                    answer=second_max;
                  }
        
    }

    //cout<<max<<endl;
    } 

    cout<<answer<<endl;

}