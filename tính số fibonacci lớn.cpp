#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int P=1e9+7;
ll fibo[1001];
void sinh(){
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=1000;i++){
        fibo[i]=(fibo[i-1]%P+fibo[i-2]%P)%P;
    }
}
int main(){
    int t;cin>>t;
    sinh();
    while(t--){
        int n;cin>>n;
        cout<<fibo[n-1]<<endl;
    }
}