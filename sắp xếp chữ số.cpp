#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void check(){
    int n;cin>>n;
    cin.ignore();
    string s;
    set<char> se;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            se.insert(s[i]);
        }
    }
    for(char x:se) cout<<x<<" ";
    cout<<endl;
}
int main(){
   int t;cin>>t;
   while(t--){
    check();
   }
}