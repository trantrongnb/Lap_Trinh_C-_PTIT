#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<set>
#include<algorithm>
#include<vector>
#include<sstream>
#define ll long long
int MAX=1e9+7;
using namespace std;
set<int> se;
int tong(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void sinh(){
    se.insert(9);
    for(int i=10;i<=1000;i++){
        if(se.find(tong(i))!=se.end()) se.insert(i);
    }
}
int main(){
    int t;cin>>t;
    sinh();
    while(t--){
        string s;cin>>s;
       int sum=0;
       for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
       } 
       if(se.find(sum)!=se.end()) cout<<1<<endl;
       else cout<<0<<endl;
    }
}