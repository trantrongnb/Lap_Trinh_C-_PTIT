#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        int n,p;cin>>n>>p;
        int dem=0;
        for(int i=1;i<=n;i++){
            int tmp=i;
            if(tmp%p==0){
                while(tmp%p==0){
                    dem++;
                    tmp/=p;
                }
            }
        }
        cout<<dem<<endl;
    }
}