#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
#include<math.h>
void check(){
    int a,m;cin>>a>>m;
    a%=m;
    for(int i=1;i<=m-1;i++){
        if((a*(i%m)%m==1)){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
       check();
    }
}