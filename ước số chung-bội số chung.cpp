#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
#include<math.h>
vector<string> luu;
int ucln(int a,int b){
    if(b==0) return a;
    return ucln(b,a%b);
}
void check(){
   int a,b;cin>>a>>b;
   cout<<(long long)a*b/ucln(a,b)<<" "<<ucln(a,b)<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}