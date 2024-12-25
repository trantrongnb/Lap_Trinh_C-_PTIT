#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
bool cmp(string a,string b){
    string ab=a+b;
    string ba=b+a;
    return ab>ba;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++) cout<<a[i];
        cout<<endl;
    }
}