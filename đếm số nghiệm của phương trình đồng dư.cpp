#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>
#include<cstring>
#include<utility>
#include<string>
#include<map>
#include<set>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long b,p;cin>>b>>p;
        long long ans=0;
        for(long long i=1;i<=p;i++){
            if(i*i%p==1){
                long long last=i+(b/p)*p;
                while(last>b) last-=p;
                ans+=(last-i)/p+1;
            }
        }
        cout<<ans<<endl;
    }
}