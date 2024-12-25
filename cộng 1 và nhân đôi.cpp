#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void check(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int chan=0,le=0;
    for(int i=0;i<n;i++){
        int tmp=0;
        while(a[i]){
            if(a[i]%2==0){
                tmp++;a[i]/=2;
            }
            else {
                le++;a[i]--;
            }
        }
        chan=max(chan,tmp);
    }
    cout<<le+chan<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}