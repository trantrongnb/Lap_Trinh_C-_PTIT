#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<cstring>
#include<set>
using namespace std;
typedef long long ll;
void check(){
    int n,x;cin>>n>>x;
    int a[n];
    set<int> se;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        if(se.find(x+a[i])!=se.end()){
            cout<<1;
            return;
        }
    }
    cout<<-1;
}
int main(){
    int t;cin>>t;
    while(t--){
        check();
        cout<<endl;
    }
}