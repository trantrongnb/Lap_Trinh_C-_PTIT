#include<iostream>
#include<algorithm>
#include<cstring>
#include<math.h>
using namespace std;
typedef long long ll;
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll l,r;cin>>l>>r;
        int lcan=sqrt(l);
        int rcan=sqrt(r);
        int dem=0;
        if(lcan*lcan!=l){
            for(int i=lcan+1;i<=rcan;i++){
                if(nt(i)) dem++;
            }
        } else {
            for(int i=lcan;i<=rcan;i++){
                if(nt(i)) dem++;
            }
        }
        cout<<dem<<endl;
    }
}