#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<utility>
vector<string> luu;
int check(string s){
    for(int i=1;i<s.size();i++){
        if(abs(s[i]-s[i-1])!=1) return 0;
    }
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(check(s)==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;        
    }
}