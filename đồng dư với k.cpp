#include<iostream>
using namespace std;
int ucln(int a,int b){
    if(b==0) return a;
    return ucln(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int minn=1e9;
        for(int i=0;i<n;i++) minn=min(a[i],minn);
        int uc=a[0]-minn;
        for(int i=0;i<n;i++) uc=ucln(uc,a[i]-minn);
        int cnt=0;
        for(int i=1;i<=uc;i++){
            if(uc%i==0) cnt++;
        }
        cout<<cnt<<endl;
    }
}