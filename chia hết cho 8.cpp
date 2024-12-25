#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
typedef long long ll;
int mod=1e9+7;
int check(string s,int n){
    int dem=0;
    for(int i=0;i<s.size();i++){
        int sum=0;
        for(int j=i;j<s.size();j++){
            sum=sum*10+s[j]-'0';
            sum%=n;
            if(sum==0) dem++;
        }
    }
    return dem;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<check(s,8)-check(s,24)<<endl;
    }
}