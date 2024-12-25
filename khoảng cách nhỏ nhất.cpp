#include<iostream>
#include <algorithm>
using namespace std;
void check(){
    //int cnt[1000001];
       // memset(cnt,0,sizeof(cnt));
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
           // cnt[a[i]]++;
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]>=2&&a[i-1]>=0){
                cout<<a[i-1]+1<<endl;
                return;
            }
        }
        if(a[n-1]<0){
            cout<<1<<endl;
            return;
        }
        cout<<a[n-1]+1<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}