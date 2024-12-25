#include<iostream>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<vector>
#include<string>
#include<cstring>
#include<map>
using namespace std;
typedef long long ll;
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}
int tong(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int check(int n){
    if(nt(n)==1) return 0;
    int s=tong(n);
    int tmp=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                tmp+=tong(i);
                n/=i;
            }
        }
    }
    if(n!=1) tmp+=tong(n);
    return s==tmp;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
       if(check(n)==1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
}