#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cstring>
#include<queue>
using namespace std;
void trong(){
    int n;cin>>n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    int sum1[n+1],sum2[n+1];
    sum1[0]=0;sum2[0]=0;
    for(int i=1;i<=n;i++) {
        sum1[i]=sum1[i-1]+a[i];
        sum2[i]=sum2[i-1]+b[i];
    }
    int ans=0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(sum1[i]-sum1[j-1]==sum2[i]-sum2[j-1]){
                ans=max(ans,i-j+1);
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        trong();
    }
}