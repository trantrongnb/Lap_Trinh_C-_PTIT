#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#include<sstream>
#include<vector>
#define ll long long
#include<iostream>
#include<string>
#include<iomanip>
#include <iostream>
 ll fi[93];
 void solve(){
    fi[0]=0;
    fi[1]=1;
    for(int i=2;i<=92;i++) fi[i]=fi[i-1]+fi[i-2];
 }
int main(){
    int t;cin>>t;
    solve();
    while(t--){
        ll n;cin>>n;
        int ok=0;
        for(int i=0;i<93;i++){
            if(fi[i]==n) ok=1;
        }
        if(ok==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}