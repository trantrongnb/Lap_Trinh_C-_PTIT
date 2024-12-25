#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void check(){
    set<int> cnt;
    int n;cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>=0&&a[i]<n) cnt.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        if(cnt.find(i)!=cnt.end()) cout<<i<<" ";
        else cout<<-1<<" ";
    }
    cout<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}