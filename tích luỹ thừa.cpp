#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<climits>
#include<math.h>
#include<iomanip>
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll x,y,p;cin>>x>>y>>p;
        ll ans=1;
        for(int i=1;i<=y;i++){
            ans=((ans%p)*(x%p))%p;
        }
        cout<<ans<<endl;
    }
}