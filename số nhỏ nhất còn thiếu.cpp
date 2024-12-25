#include<iostream>
using namespace std;
#include<map>
#include<string>
void check(){
    map<int,int> mp;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=1000001;i++){
        if(mp[i]==0){
            cout<<i<<endl;
            return;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
    }
}