#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int ans=0,sum=0;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])==0){
                ans+=sum;
                sum=0;
            } else sum=sum*10+s[i]-'0';
        }
        ans+=sum;
        cout<<ans<<endl;
    }
}