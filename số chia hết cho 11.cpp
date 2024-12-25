#include<iostream>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans=(ans*10+s[i]-'0')%11;
        }
        if(ans==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
}