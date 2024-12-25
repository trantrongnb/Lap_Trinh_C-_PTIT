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
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll ans=0,pow=1;
        for(int i=n-1;i>=0;i--){
            ans=(ans+a[i]*pow)%MAX;
            pow=(pow*x)%MAX;
        }
        cout<<ans<<endl;
    }
}