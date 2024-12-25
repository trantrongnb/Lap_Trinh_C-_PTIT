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
int MAX=1e9+7;
using namespace std;
int fibo[1005]={0};
void solve(){
   int l=0,r=1,tt=1;
   fibo[0]=1;fibo[1]=1;
   while(l<=1000&&r<=1000){
    fibo[l+r]=1;
    tt=r;
    r=l+r;
    l=tt;
   }
}
int main(){
    int t;cin>>t;
    solve();
    while(t--){
        int n;cin>>n;
        int a[n],tt[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++) if(fibo[a[i]]==1) cout<<a[i]<<" ";
        cout<<endl;
    }
}