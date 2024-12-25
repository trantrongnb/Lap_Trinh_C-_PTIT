#include <iostream>
#include <vector>
#include <algorithm>
#include<math.h>
#include<cstring>
#include<utility>
#include<string>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a,a+n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    cout<<a[j]<<" ";
                    a[j]=-1;
                }
            }
        }
        for(int i=0;i<n;i++) if(a[i]!=-1) cout<<a[i]<<" ";
        cout<<endl;
    }
}