#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int T[n+1];
        for(int i=1;i<=n;i++){
            T[i]=1;
            for(int j=i-1;j>=1;j--){
                if(a[i]>a[j]){
                    T[i]=max(T[i],T[j]+1);
                }
            }
        }
        int L[n+1];
        for(int i=n;i>=1;i--){
            L[i]=1;
            for(int j=i+1;j<=n;j++){
                if(a[i]>a[j]){
                    L[i]=max(L[i],L[j]+1);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,T[i]+L[i]-1);
        }
        cout<<ans<<endl;
    }
}